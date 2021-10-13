import struct
import numpy as np
import tensorflow as tf
import serial
import time
model=tf.keras.models.load_model("./model1.h5")
ser=serial.Serial("COM5",115200,timeout=1)
Channel=18
word=['好','坏','你','1','2','布',"石头","剪刀"]
for i in range(500):
    
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
    print(word[num],np.max(a),i)
    ser.open()
ser.close()


