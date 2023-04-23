import time
from colored import fore, style

text = "The quick brown fox jumps over the lazy dog"
def print_lb(leaderboard):
    for (i, speed) in enumerate(leaderboard, 1):
        print(f"  {i}. {speed[0]} wpm, {speed[1]}% acc")

def main():
    top_scores = []
    accurate_scores = []
    while True:
        print(fore.DARK_SLATE_GRAY_1 + "Type \"" + style.BOLD + fore.BLUE + text + style.RESET + fore.DARK_SLATE_GRAY_1 + "\" as fast as you can!") #adds color to console ouputs
        input("Press " + style.BOLD + "enter" + style.RESET + fore.DARK_SLATE_GRAY_1 + " to start typing")
        print(fore.SKY_BLUE_2 + "Start typing!\n" + style.UNDERLINED + text + fore.MEDIUM_VIOLET_RED + style.BOLD)
        start_time = 0
        sentence = ""
        start_time = time.time() #Starts the timer
        sentence = input("")
        WPM = int(540/(time.time() - start_time)) #Calculates WPM
        
        correct = 0
        for i in range(min(len(sentence), len(text))):
            if sentence[i] == text[i]:
                correct += 1
        accuracy = round((correct*100)/max(len(text), len(sentence)), 1)
        print(style.RESET + fore.LIGHT_BLUE + f"\nYou typed the text with {accuracy}% accuracy\nYou typed at a speed of {WPM} WPM")
        
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
            
            #replaces lowest score with WPM if WPM is bigger than lowest score
        top_scores.sort(reverse=True) #sorts it in case WPM was rgeater than top_score[0] or top_score[1]
        accurate_scores.sort(reverse=True, key=lambda x: x[1])
      
        def choices():
          choice = input("Press: \nA (or any other key) to play again\nL to access your fastest scores\nC to access your most accurate scores\nE to end the game\n").lower() #Choices
          if choice == 'e':
              #Only executes if player ends the game
              print("Thanks for playing!")
              print_lb(top_scores) #Prints leaderboard one last time
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
          
main() #runs the game