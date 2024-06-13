import pynput.keyboard as Keyboard
import pynput.mouse as Mouse
import time
import random
keyboard = Keyboard.Controller()
mouse = Mouse.Controller()
# make sure to make sleep on 5 mins
keep_running = True

# 570 744
# 

def switch(x, y):
    mouse.position = (x, y)
    time.sleep(random.uniform(0.2, 0.5))
    mouse.press(Mouse.Button.left)
    time.sleep(0.1)
    mouse.release(Mouse.Button.left)
    time.sleep(0.5)

def actionthing(x, y):
    keyboard.type('!sr d:0')
    time.sleep(random.uniform(0.2, 0.5))
    keyboard.press(Keyboard.Key.enter)
    time.sleep(random.uniform(6.3, 7.2))
    mouse.position = (x, y)
    time.sleep(random.uniform(0.2, 0.5))
    mouse.press(Mouse.Button.left)
    time.sleep(0.1)
    mouse.release(Mouse.Button.left)

def rin_bot_farm():
    counter = 0
    time.sleep(0.5)
    while (keep_running):
        actionthing(488, 692)
        time.sleep(random.uniform(0.2, 0.5))
        switch(180, 704)
        actionthing(488, 692)
        time.sleep(random.uniform(0.2, 0.5))
        switch(180, 621)
        actionthing(488, 692)
        time.sleep(random.uniform(0.2, 0.5))
        switch(180, 658)
        actionthing(488, 692)
        time.sleep(random.uniform(0.2, 0.5))
        switch(180, 600)
        counter += 1
        if (counter % 100 == 0):
            time.sleep(60)
            print(counter)
        else:
            time.sleep(random.uniform(1, 2))

def on_press(key):
    global keep_running
    key = str(key)
    if key == "'='":
        keep_running = False
        exit()
    elif key == "'-'":
        rin_bot_farm()

def main():
    while keep_running:
        time.sleep(1)

listener = Keyboard.Listener(on_press=on_press)
listener.start()

main()