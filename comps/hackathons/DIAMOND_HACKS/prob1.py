import time
from colored import fore, style

text = "The quick brown fox jumps over the lazy dog"
print(f"{fore.DARK_SLATE_GRAY_1}Type \"{style.BOLD + fore.BLUE}{text}{style.RESET + fore.DARK_SLATE_GRAY_1}\" as fast as you can!") #adds color to console ouputs
input(f"Press{style.BOLD} enter{style.RESET + fore.DARK_SLATE_GRAY_1} to start typing")
print(fore.SKY_BLUE_2 + "Start typing!\n" + style.UNDERLINED + text + fore.MEDIUM_VIOLET_RED + style.BOLD)
start_time = time.time()
sentence = input(fore.MEDIUM_VIOLET_RED + style.BOLD)
WPM = int(540/(time.time() - start_time)) #(9*60)/(time it took)
#current time - start time = total time

correct = 0
for i in range(min(len(sentence), len(text))):
    if sentence[i] == text[i]:
        correct += 1
accuracy = round((correct*100)/max(len(text), len(sentence)), 1)
print(style.RESET + fore.LIGHT_BLUE + f"\nYou typed the text with {accuracy}% accuracy at a speed of {WPM} WPM")