import pyttsx3
 
say = pyttsx3.init()        # 创建pyttsx对象，并初始化对象
 


import struct
import numpy as np
import tensorflow as tf
import serial
import time
model=tf.keras.models.load_model("./model1.h5")
ser=serial.Serial("COM5",115200,timeout=1)
Channel=18
word=['好','你','1','布',"石头","剪刀","我",'3']
buf=[]
count=0
Value_b=0
count_l=0
while(1):
    
    while 1:
        if ser.read(1)==b'\xaa':
            if ser.read(1)==b'\xbb':
                rx_buffer=ser.read(2*Channel)
                data = list(struct.unpack("%dh"%Channel, rx_buffer))
                ser.close()
                break
   # print(data)
    data1=(np.array(data)+2000) / 4000
    inputs=np.array(data1).reshape(1,Channel)
    predictions= model.predict(inputs)
    a=np.round(predictions, decimals=3)
    num=np.where(a==np.max(a))[1][0]
    buf.append(num)
    if len(buf)==15:
        Value=np.argmax((np.bincount(buf)))
        if Value==Value_b:           
            pass
        else :
            Value_b=Value
            print(word[num],np.max(a),count_l)
            say.say(word[num])        # 合成并播放语音
            say.runAndWait()    # 等待语音播放完
            count_l=count_l+1
        buf=[]
    ser.open()
    if count_l>100:
        break
ser.close()


