import pynput
from pynput.keyboard import Key
from pynput.mouse import Button
import time

Keyboard = pynput.keyboard.Controller()
mouse = pynput.mouse.Controller()
time.sleep(6)
#dir(Key)
#翻页
'''  
time.sleep(10)
Keyboard.press(Key.right)  #按下方向键右键
Keyboard.release(Key.right)  #释放
time.sleep(3)
Keyboard.press(Key.left)  #按下方向键左键
Keyboard.release(Key.left)  #释放
'''
#print(mouse.position) #读取鼠标位置
#mouse.position(920,360)  #设置鼠标位置

#mouse.press(Button.left)  #按下鼠标左键
#mouse.release(Button.left)  #释放鼠标左键
#mouse.click(Button.left)  #单击
#mouse.click(Button.left,2)  #双击
mouse.scroll(0,2)  #向上滚动两格  -2：向下滚动两格
