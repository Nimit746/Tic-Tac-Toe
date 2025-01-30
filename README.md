# Tic-Tac-Toe Game

## Description

This is a simple console-based Tic-Tac-Toe game implemented in C++. The game allows two players to take turns marking spaces on a 3×3 board until one player wins or the game ends in a draw.

## Features

- Two-player mode
- Input validation to prevent overwriting marked positions
- Clear and readable game board
- Automatic winner detection
- Displays the winning player or declares a draw

## How to Play

1. Player 1 (X) and Player 2 (O) enter their names.
2. Players take turns choosing a position (1-9) on the board.
3. The game board updates after each turn.
4. The game checks for a winner after each move.
5. The game ends when a player wins or all spaces are filled, resulting in a draw.

## Game Rules

- The game board consists of a 3x3 grid.
- Players alternate turns, choosing an empty position (1-9).
- A player wins by marking three consecutive cells in a row, column, or diagonal.
- If all positions are filled and no player has won, the game ends in a draw.

## Compilation and Execution

### Using g++ (GCC Compiler)

To compile the game, use the following command:

```sh
 g++ tic_tac_toe.cpp -o tic_tac_toe
```

To run the compiled program:

```sh
 ./tic_tac_toe
```

### Windows (MinGW or Visual Studio)

If using MinGW, compile using:

```sh
 g++ tic_tac_toe.cpp -o tic_tac_toe.exe
```

Run the executable:

```sh
 tic_tac_toe.exe
```

## Code Structure

- **game class**: Contains functions for printing the board, marking positions, and checking the winner.
- **print\_board()**: Displays the current board state.
- **mark()**: Allows players to place their marks on the board.
- **winner()**: Checks if there is a winner and returns the winning player.
- **main()**: Handles user input, game flow, and output.

## Example Gameplay

```
Player 1 (x) and Player 2 (o)
Enter the name of player 1: Alice
Enter the name of player 2: Bob
The game is started

   |   |  
 --+---+---
   |   |  
 --+---+---
   |   |  

Enter the position (1-9) where you want to mark for Player 1: 5

   |   |  
 --+---+---
   | X |  
 --+---+---
   |   |  

...

Player: Alice wins the game!
```

## Future Improvements

- Add an AI opponent for single-player mode
- Implement a graphical user interface (GUI)
- Save and load game progress

## License

This project is open-source and available under the MIT License.

## Contributions

Contributions are welcome! Feel free to fork this repository, improve the code, and submit pull requests.

## Author

Developed by Nimit

