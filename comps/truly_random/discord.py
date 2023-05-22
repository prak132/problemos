import pynput.keyboard as Keyboard
from pynput.keyboard import Key
import pynput.mouse as Mouse
from pynput.mouse import Button
import time
from sys import exit
keyboard = Keyboard.Controller()
mouse = Mouse.Controller()
keep_running = True
def discord():
    z = 1000
    for x in range(9000):
        mouse.position = (700, 239)
        time.sleep(1)
        mouse.press(Button.left)
        mouse.release(Button.left)
        time.sleep(1)
        for y in range (11):
            keyboard.press(Key.backspace)
        time.sleep(1)
        keyboard.type(f"prak#{z}")
        time.sleep(1)
        keyboard.press(Key.enter)
        keyboard.release(Key.enter)
        time.sleep(1)
        keyboard.press(Key.enter)
        keyboard.release(Key.enter)
        z+=1
        time.sleep(1)

def on_press(key):
    global keep_running
    key = str(key)
    if key == "'='":
        keep_running = False
    elif key == "']'":
        discord()
def main():
    while keep_running:
        time.sleep(1)
listener = Keyboard.Listener(on_press=on_press)
listener.start()
main()