import time
import random
from colored import fore, style

with open("words.txt", "r") as f: #Opens file
    words = f.read().splitlines()

def generate_text(num):
    return " ".join(random.choices(words, k=num)) #Join these words pulled (randomly) from the open function

lb_colors = [fore.GOLD_1, fore.GREY_89, fore.DARK_ORANGE_3B]
def print_lb(leaderboard):
    for (i, speed) in enumerate(leaderboard, 1):
        print(lb_colors[i-1] + f"  {i}. {speed[0]} wpm, {speed[1]}% acc" + fore.DARK_SLATE_GRAY_1) 

def main():
    top_scores = []
    accurate_scores = []
    while True:
        nums = input(fore.DARK_SLATE_GRAY_1 + "How many words would you like to have(1 - 100)? ") #Asks for you to define how many words you would like to type
        while not nums.isdigit() or int(nums) <= 0 or int(nums) >= 100:
            nums = input(fore.DEEP_PINK_2 + "Please input a valid number: ")
        nums = int(nums)
        text = generate_text(nums)
        print(f"{fore.DARK_SLATE_GRAY_1}Type \"{style.BOLD + fore.BLUE}{text}{style.RESET + fore.DARK_SLATE_GRAY_1}\" as fast as you can!") #Adds color to console ouputs
        input(f"Press{style.BOLD} enter{style.RESET + fore.DARK_SLATE_GRAY_1} to start typing")
        print(fore.SKY_BLUE_2 + "Start typing!\n" + style.UNDERLINED + text + fore.MEDIUM_VIOLET_RED + style.BOLD)
        start_time = time.time()
        sentence = input(fore.MEDIUM_VIOLET_RED + style.BOLD)
        WPM = int((len(sentence)*12)/((time.time() - start_time)))
        correct = 0
        for i in range(min(len(sentence), len(text))):
            if sentence[i] == text[i]:
                correct += 1
        accuracy = round((correct*100)/max(len(text), len(sentence)), 1) #Accuracy measured in (num correct characters)/(longest string)
        print(f"{style.RESET + fore.LIGHT_BLUE}\nYou typed the text with {accuracy}% accuracy at a speed of {WPM} WPM")
        
        if len(top_scores) < 3:
            top_scores.append((WPM, accuracy))
        else:
            if top_scores[2][0] < WPM:
                top_scores[2] = (WPM, accuracy)

        if len(accurate_scores) < 3:
            accurate_scores.append((WPM, accuracy))
        else:
            if accurate_scores[2][0] < accuracy:
                top_scores[2] = (WPM, accuracy)
            
            #Replaces lowest score with WPM if WPM is bigger than lowest score
        top_scores.sort(reverse=True) #Sorts it in case WPM was rgeater than top_score[0] or top_score[1]
        accurate_scores.sort(reverse=True, key=lambda x: x[1])
      
        def choices():
          choice = input("Press: \nA (or any other key) to play again\nL to access your fastest scores\nC to access your most accurate scores\nE to end the game\n").lower() #Choices
          if choice == 'e':
              #Only executes if player ends the game
              print("Thanks for playing!")
              print_lb(top_scores) #Prints leaderboard one last time
              print(f"\n{fore.DEEP_PINK_2}Goodbye")
              return "Done"
          elif choice == 'l':
              print("Your fastest scores:")
              print_lb(top_scores) #Prints wpm leaderboard
              choices()
          elif choice == 'c':
              print("Your most accurate scores:")
              print_lb(accurate_scores) #Prints accuracy 'leaderboard'
              choices()
          else:
              return "Continue" #Play again
            
        if choices() == "Done":
            break #If user decides to end the game, break from the while loop
          
main() # Runs the game