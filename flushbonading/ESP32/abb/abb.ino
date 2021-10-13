#include <WiFi.h>
#include <Wire.h>
#include <SPI.h>
#include <Adafruit_BMP280.h>
#include <ArduinoJson.h>
#include <AliyunIoTSDK.h>
AliyunIoTSDK iot;
WiFiClient   espClient;
//以下信息需要自己修改
#define WIFI_SSID        "Geohot"    //替换自己的WIFI
#define WIFI_PASSWD      "zheng123+"    //替换自己的WIFI
#define PRODUCT_KEY      "a14U9SqHU0Y"   //替换自己的PRODUCT_KEY
#define DEVICE_NAME      "MyDevice1"   //替换自己的DEVICE_NAME
#define DEVICE_SECRET    "4a36aeb2a99f7bd4b6d3c966ba661f17"//替换自己的DEVICE_SECRET
#define REGION_ID "cn-shanghai"

Adafruit_BMP280 bmp; // use I2C interface
Adafruit_Sensor *bmp_temp = bmp.getTemperatureSensor();
Adafruit_Sensor *bmp_pressure = bmp.getPressureSensor();

int LedPin = 13;
int LedFlag = 0;
 
void wifiInit(const char *ssid, const char *passphrase)
{
    WiFi.mode(WIFI_STA);
    WiFi.begin(ssid, passphrase);
    WiFi.setAutoConnect (true);
    WiFi.setAutoReconnect (true);
    while (WiFi.status() != WL_CONNECTED)
    {
        delay(1000);
        Serial.println("WiFi not Connect");
    }
    Serial.println("Connected to AP");
    Serial.println("Local IP: ");
    Serial.println(WiFi.localIP());
}
  
void setup() {
  Serial.begin(115200);
  Serial.println("Demo Start");

  pinMode(LedPin, OUTPUT);
  digitalWrite(LedPin, HIGH);
  
  if (!bmp.begin(0x76)) {
    Serial.println(F("Could not find a valid BMP280 sensor, check wiring!"));
    while (1) delay(10);
  }
  /* Default settings from datasheet. */
  bmp.setSampling(Adafruit_BMP280::MODE_NORMAL,     /* Operating Mode. */
                  Adafruit_BMP280::SAMPLING_X2,     /* Temp. oversampling */
                  Adafruit_BMP280::SAMPLING_X16,    /* Pressure oversampling */
                  Adafruit_BMP280::FILTER_X16,      /* Filtering. */
                  Adafruit_BMP280::STANDBY_MS_500); /* Standby time. */

  wifiInit(WIFI_SSID, WIFI_PASSWD);
  AliyunIoTSDK::begin(espClient, PRODUCT_KEY, DEVICE_NAME, DEVICE_SECRET, REGION_ID);
  // 绑定属性回调
  AliyunIoTSDK::bindData("redlight", LedOnCallback);
  //mqttClient.setCallback(mqtt_callback);
}

unsigned long lastMsMain = 0;
void loop()
{
    sensors_event_t temp_event, pressure_event;
    AliyunIoTSDK::loop();
    if (millis() - lastMsMain >= 5000)
    {
        lastMsMain = millis();
        // 发送模型属性到阿里云平台
        bmp_temp->getEvent(&temp_event);
        AliyunIoTSDK::send("temp", temp_event.temperature);
        bmp_pressure->getEvent(&pressure_event);
        AliyunIoTSDK::send("baro", pressure_event.pressure);
        AliyunIoTSDK::send("redlight", pressure_event.pressure);
    }
}

void LedOnCallback(JsonVariant p)
{
    serializeJsonPretty(p, Serial);
    int LedFlag = p["redlight"];
    if (LedFlag == 1)
    {
        //turn on the led
        digitalWrite(LedPin, LOW);
    }
    else
    {
        //turn off the led
        digitalWrite(LedPin, HIGH);
    }
}
