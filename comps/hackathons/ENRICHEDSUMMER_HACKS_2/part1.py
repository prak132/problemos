import os
import random
import numpy as np

# set up the player class
class Player:
  def __init__(self, name, color):
    self.name = name
    self.color = color

# some definitions
last_move = (-1, -1)
done = False
width = 7
height = 6
bomb_explosions = 0
improved = False
cntt = random.randint(5, 10)
red = '\033[1;31;40m'
blue = '\033[1;34;40m'
yellow = '\033[1;33;40m'
white = '\033[1;37;40m'
dark_red = '\033[1;35;40m'
dark_yellow = '\033[1;32;40m'

# Set width and lenght
def setrc():
  global width
  global height
  while True:
    print("Set the Width")
    weedth = input()
    if weedth.isnumeric() and int(weedth) >= 4 and int(weedth) < 20:
      width = int(weedth)
      break
    else:
      print("Please input a valid integer greater than 4 and less than 20")
  while True:
    print("Set the Height")
    heeght = input()
    if heeght.isnumeric() and int(heeght) >= 4 and int(heeght) < 20:
      height = int(heeght)
      break
    else:
      print("Please input a valid integer greater than 4 and less than 20")

# Option menu for options!
print("Type and enter A, B, or C to choose your settings")
while not done:
  option = str(
    input('[A] Change Board Size\n[B] Improved Mode\n[C] Save And Continue\n[D] Help (info)\n')).lower()
  if (option == 'a'):
    setrc()
  elif (option == 'b'):
    print("Improved Mode Enabled\nModes included in improved mode include wild slots and color changing peices")
    improved = True
  elif (option == 'c'):
    done = True
  elif (option == 'd'):
    print("Players choose yellow or red tics. They drop the tics into the grid, starting in the middle or at the edge to stack their colored tics upwards, horizontally, or diagonally. Use strategy to block opponents while aiming to be the first player to get 4 in a row to win.\nChanging Board size allows you to change the grid from the default 6x7 to Whatever you want (restricted to less than or equal to 20x20)\nIn improved mode you will see 2 new modes called Color Changing mode and Wild Slots here is a breif explanation of each mode, Color Changing Piece mode causes a random color changing peice to be spawn randomly in on move 8-11 so the peice switches color every move this is to create new strategizes on how to play (larger board recommended), Wild slots is a mode which causes for 2 slots to become wild slots which if you place a peice on it, you will get a powerup which allows you to explode peices in that entire row\n")
  else:
    print("Invalid option. Try again.")

# Set up the game board 
board = np.full((height, width), blue) 

# Spawn the wild slots at random open positions
spawn_positions = []
for _ in range(2):
    spawn_row = random.randint(0, height - 2)
    spawn_col = random.randint(0, width - 1)
    while (spawn_row, spawn_col) in spawn_positions or board[spawn_row][spawn_col] != blue:
        spawn_row = random.randint(0, height - 2)
        spawn_col = random.randint(0, width - 1)
    spawn_positions.append((spawn_row, spawn_col))
    board[spawn_row][spawn_col] = dark_yellow if _ == 0 else dark_red
# print the board made it better from origional
def print_board(board):
  dashes = (4 * width) + 1
  row_separator = f'{blue}{"-" * dashes}'
  for row in board:
    print(row_separator)
    row_string = f'{blue}| '
    for cell in row:
      row_string += f'{cell}O {blue}| '
    print(row_string[:-1])
  print(row_separator)
  column_numbers = f'{white}  {"   ".join(str(i + 1) for i in range(width))}'
  print(column_numbers)
# apply gravity after exploision
def apply_gravity(board):
  new_board = np.full((height, width), blue)
  for col in range(width):
    ind = height-1
    for row in range(height-1, -1, -1):
      if board[row][col] != blue:
        new_board[ind][col] = board[row][col]
        ind-=1
  return new_board
# verifying and realizing moves
def get_move(board, color):
    while True:
        print('Make your move: ')
        move = input()
        if move.isnumeric() and int(move) > 0 and int(move) <= width:
            move = int(move) - 1
            if 0 <= move < width:
                for row in range(height - 1, -1, -1):
                    if board[row][move] in [blue, dark_red, dark_yellow]:
                      board[row][move] = color
                      if (row, move) in spawn_positions:
                          board = explode_row(board, row)
                          board = apply_gravity(board)
                        #remove the position so u can place back on top
                          spawn_positions.remove((row, move))
                          return row, move
                          
                      return row, move
        else:
            print('Invalid move. Try again.')

# we output this when someone wins the game
def wins(color):
  winning_player = player1 if color == player1.color else player2
  print('{}{} is the WINNER!!!{}'.format(winning_player.color,
                                         winning_player.name, white))

# Checking for a winner using numpy to speed it up and simplify the process 
def check_if_winner(board, color):
    board_array = np.array(board)
    # vertical win
    for row in range(height):
        for col in range(width - 3):
            if np.all(board_array[row, col:col + 4] == color):
                wins(color)
                return True
    # Horizontal win
    for col in range(width):
        for row in range(height - 3):
            if np.all(board_array[row:row + 4, col] == color):
                wins(color)
                return True
    # diagonal win
    for row in range(height - 3):
        for col in range(width - 3):
            if np.all(np.diagonal(board_array[row:row + 4, col:col + 4]) == color):
                wins(color)
                return True
    # diagonal win
    for row in range(height - 3):
        for col in range(3, width):
            if np.all(np.diagonal(np.fliplr(board_array[row:row + 4, col - 3:col + 1])) == color):
                wins(color)
                return True
    return False

# Checking for a tie by checking if all the spaces are taken
def check_for_tie(board):
  if np.all(board[0] != blue):
    print(f"{red} Oh no! It's a Tie, Game Over")
    return True
  return False


# Setting up the plaers for their classes
player1 = Player('Player 1', red)
player2 = Player('Player 2', yellow)

# Simplifying the winner class for thw game loop
def winner(board, last_move):
    return check_if_winner(board, red) or check_if_winner(board, yellow)

# Initilizations for 
os.system('clear')
print_board(board)
print('Welcome to Terminal Connect 4')
print()

# setting up stuff for the color changing peices and stuff 
current_player = player1.color
until_change = random.randint(6, 8)
changes = []
# how we expload the whole row
def explode_row(board, row):
    global bomb_explosions
    for col in range(width):
        board[row][col] = blue
    return board

# how we alternate between players and other colors
def change_color(color):
  if color == red or color == yellow:
    if color == red:
        color = yellow
    else:
        color = red
  else:
    if color == dark_red:
      color = dark_yellow
    else:
      color = dark_red
  
  return color

# Main game loop for continuous 
while not winner(board, last_move) and not check_for_tie(board):
    # getting the moves 
    last_move = get_move(board, current_player)
    #if the mode is enabled do it
    if improved:
        if until_change == 0:
          changey = random.randint(0, width - 1)
          changex = -1
          for row in range(height - 1, -1, -1):
            if board[row][changey] == blue:
              # placing the peice at random
              board[row][changey] = random.choice([red, yellow])
              changex = row
              break
          until_change = random.randint(8, 11)
          changes.append((changex, changey))
        else:
            # until the change
            until_change -= 1
    for change in changes:
        x, y = change
        board[x][y] = change_color(board[x][y])
        # color changing aspect
    current_player = change_color(current_player)
    os.system('clear')
    print_board(board)
    # what happenes if there is a winner
    if winner(board, last_move):
        break


