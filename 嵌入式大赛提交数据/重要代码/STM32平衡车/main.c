#include "sys.h"
/****************************init*************************************/    
float Voltage;  															
float pitch,roll,yaw; 								  			
short aacx,aacy,aacz;											
short gyrox,gyroy,gyroz;									
float UltrasonicWave_Distance;                 
int   Encoder_Left,Encoder_Right;         		 
int 	Moto1=0,Moto2=0;												

int Velocity=0,Turn=0;

u8    key=0;								 									 
/***********************************************************************/
int main(void)	
{ 
	LED_Init();                  
	USB_Init();										 
	KEY_Init();                    
	delay_init();	    	           
	uart1_init(115200);	           
	uart3_init(115200);              //=====LORA无线通讯模块串口
	delay_ms(100);

	uart3_init(115200);            
	NVIC_Configuration();					 
	Adc_Init();                    
	Encoder_Init_TIM2();           
	Encoder_Init_TIM4();          
	Timer3_Init(5000,7199);	    	 
	OLED_Init();                  
	OLED_Clear();									 
	MPU_Init();					    			 
	mpu_dmp_init();												 
	UltrasonicWave_Configuration();
	TIM1_PWM_Init(7199,0);   			
	delay_ms(1000);								 
	Motor_Init();									
	MPU6050_EXTI_Init();					 
	oled_first_show();					
  while(1)	
	{
		oled_show();
		delay_ms(50); 
	} 	
}



