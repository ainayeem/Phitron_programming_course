import pyautogui
from time import sleep
sleep(5)
for i in range(0,1):
    pyautogui.write('Trying gui', interval=0.25)
    pyautogui.press('enter')


# pyautogui.alert('This is the message to display.')

