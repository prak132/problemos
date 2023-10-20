import os
import random
import numpy as np

# didnt ask for comments so we didnt add any lol

class Player:

  def __init__(self, name, color):
    self.name = name
    self.color = color


last_move = (-1, -1)
done = False
width = 7
height = 6
ttirow = False
cntt = random.randint(5, 10)
possible_moves = 0
red = '\033[1;31;40m'
blue = '\033[1;34;40m'
yellow = '\033[1;33;40m'
white = '\033[1;37;40m'


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


print("Type and enter A, B, or C to choose your settings")
while not done:
  option = str(
    input(
      '[A] Change Board Size\n[B] Two turns in a row\n[C] Save And Continue\n')
  ).lower()
  if (option == 'a'):
    setrc()
  elif (option == 'b'):
    ttirow = True
    print("Two turns in a row model Enabled")
  elif (option == 'c'):
    done = True
  else:
    print("Invalid option. Try again.")

board = np.full((height, width), blue)


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
  if ttirow:
    print(f"{cntt} moves left until a double")


def get_move(board, color):
  global possible_moves
  possible_moves += 1
  while True:
    print('Make your move: ')
    move = input()
    if move.isnumeric() and int(move) > 0 and int(move) <= int(width):
      move = int(move) - 1
      if 0 <= move < width and board[0][move] == blue:
        for row in range(height - 1, -1, -1):
          if board[row][move] == blue:
            board[row][move] = color
            return row, move
    else:
      print('Invalid move. Try again.')


def wins(color):
  winning_player = player1 if color == player1.color else player2
  print('{}{} is the WINNER!!!{}'.format(winning_player.color,
                                         winning_player.name, white))


def check_if_winner(board, color, last_move):
  i, j = last_move[0], last_move[1]
  board_array = np.array(board)
  for start in range(width - 3):
    if np.all(board_array[i, start:start + 4] == color):
      wins(color)
      return True
  for start in range(height - 3):
    if np.all(board_array[start:start + 4, j] == color):
      wins(color)
      return True
  for x in range(height - 3):
    for y in range(width - 3):
      if np.all(np.diagonal(board_array[x:x + 4, y:y + 4]) == color):
        wins(color)
        return True
  for x in range(3, height):
    for y in range(width - 3):
      if np.all(
          np.diagonal(np.flipud(board_array[x - 3:x + 1, y:y + 4])) == color):
        wins(color)
        return True
  return False


def check_for_tie(board):
  if possible_moves == width * height:
    print(f"{red} Oh no! It's a Tie, Game Over")
    return True
  return False


player1 = Player('Player 1', red)
player2 = Player('Player 2', yellow)


def winner(board, last_move):
  return check_if_winner(board, red, last_move) or check_if_winner(
    board, yellow, last_move)


os.system('clear')
print_board(board)
print('Welcome to Terminal Connect 4')
print()

current_player = player1.color

while not winner(board, last_move) and not check_for_tie(board):
  if cntt == 0 and ttirow:
    print("It is your turn again!")
    cntt = random.randint(5, 10)
  last_move = get_move(board, current_player)

  if current_player == red:
    current_player = yellow
  else:
    current_player = red
  cntt -= 1
  if cntt == 0 and ttirow:
    if current_player == red:
      current_player = yellow
    else:
      current_player = red
  os.system('clear')
  print_board(board)
  if winner(board, last_move):
    break

