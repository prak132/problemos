import pynput.keyboard as Keyboard
from pynput.keyboard import Key
import pynput.mouse as Mouse
from pynput.mouse import Button, Controller
import time
from sys import exit
import string
import random
keyboard = Keyboard.Controller()
mouse = Mouse.Controller()
keep_running = True
#dw about this
#python3 rand/idk/bing.py
def bing():
        for x in range(40):
            res = ''.join(random.choices(string.ascii_uppercase + string.digits, k=1))
            mouse.position = (470, 175)
            print(f'moved it to {mouse.position} successfully')
            mouse.press(Button.left)
            mouse.release(Button.left)
            time.sleep(1)
            keyboard.press(str(res))
    #        keyboard.type('ayo')
            keyboard.press(Key.enter)
            keyboard.release(Key.enter)

def on_press(key):
    global keep_running
    key = str(key)
    if key == "'='":
        keep_running = False
    elif key == "']'":
        bing()
def main():
    while keep_running:
        time.sleep(1)
listener = Keyboard.Listener(on_press=on_press)
listener.start()
main()