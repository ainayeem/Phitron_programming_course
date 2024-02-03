import pyautogui
from time import sleep

n = int(input())

sleep(3)

pyautogui.write(str(n), interval=0.25)
pyautogui.press("enter")
for i in range(1, n + 1):
    pyautogui.write("*" * i, interval=0.25)
    pyautogui.press("enter")



