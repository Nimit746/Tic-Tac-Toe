#include <bits/stdc++.h>
using namespace std;

char board[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
const char player1 = 'x';
const char player2 = 'o';

class game
{
public:
    void print_board()
    {
        cout << board[0] << " | " << board[1] << " | " << board[2] << endl;
        cout << "--+---+---" << endl;
        cout << board[3] << " | " << board[4] << " | " << board[5] << endl;
        cout << "--+---+---" << endl;
        cout << board[6] << " | " << board[7] << " | " << board[8] << endl;
    }

    void mark(int pos, char player)
    {
        int a = 0;
        do
        {
            pos--;
            if (board[pos] == ' ' && (pos > -1 && pos < 10))
            {
                board[pos] = player;
                break;
            }
            else
            {
                a = 1;
                cout << "Invalid position" << endl;
                cout << "Enter the position again: ";
                cin >> pos;
            }
        } while (a == 1);
    }

    // int winner(){
    //     if(board[0] == board[1] == board[2] == 'x') return 1;
    //     if(board[3] == board[4] == board[5] == 'x') return 1;
    //     if(board[6] == board[7] == board[8] == 'x') return 1;
    //     if(board[0] == board[3] == board[6] == 'x') return 1;
    //     if(board[1] == board[4] == board[7] == 'x') return 1;
    //     if(board[2] == board[5] == board[8] == 'x') return 1;
    //     if(board[2] == board[4] == board[6] == 'x') return 1;
    //     if(board[0] == board[4] == board[8] == 'x') return 1;
    //     // if(board[0] == board[1] == board[2] == 'o') return 2;
    //     // if(board[3] == board[4] == board[5] == 'o') return 2;
    //     // if(board[6] == board[7] == board[8] == 'o') return 2;
    //     // if(board[0] == board[3] == board[6] == 'o') return 2;
    //     // if(board[1] == board[4] == board[7] == 'o') return 2;
    //     // if(board[2] == board[5] == board[8] == 'o') return 2;
    //     // if(board[2] == board[4] == board[6] == 'o') return 2;
    //     // if(board[0] == board[4] == board[8] == 'o') return 2;
    // }

    int winner()
    {
        // Check rows for a win
        for (int i = 0; i < 9; i += 3)
        {
            if (board[i] != ' ' && board[i] == board[i + 1] && board[i + 1] == board[i + 2])
            {
                return board[i] == player1 ? 1 : 2;
            }
        }
        // Check columns for a win
        for (int i = 0; i < 3; i++)
        {
            if (board[i] != ' ' && board[i] == board[i + 3] && board[i + 3] == board[i + 6])
            {
                return board[i] == player1 ? 1 : 2;
            }
        }
        // Check diagonals for a win
        if (board[0] != ' ' && board[0] == board[4] && board[4] == board[8])
        {
            return board[0] == player1 ? 1 : 2;
        }
        if (board[2] != ' ' && board[2] == board[4] && board[4] == board[6])
        {
            return board[2] == player1 ? 1 : 2;
        }
        return 0;
    }
};

int main()
{
    system("cls");
    game g;
    bool a = true;
    int pos;
    cout << "Player 1 (x) and Player 2 (o)" << endl;
    pair<pair<string, string>, pair<string, string>> players;
    players.first.second = 'x';
    players.second.second = 'o';
    cout << "Enter the name of player 1: ";
    cin >> players.first.first;
    cout << "Enter the name of player 2: ";
    cin >> players.second.first;
    cout << "The Players are: " << endl;
    cout << "Player 1: " << players.first.first << " having sign: " << players.first.second << endl
         << "Player 2: " << players.second.first << " having sign: " << players.second.second << endl;

    string flag;


        
        cout << "The game is started" << endl;
        int winner = 0;
        for (int i = 0; i < 9; i += 2)
        {
            g.print_board();
            cout << "Enter the position (1-9) where you want to mark for Player 1: " << endl;
            cin >> pos;
            g.mark(pos, player1);
            g.print_board();

            winner = g.winner();
            if (winner != 0)
            {
                break;
            }

            if (i == 8)
            {
                break;
            }
            cout << "Enter the position (1-9) where you want to mark for Player 2: " << endl;
            cin >> pos;
            g.mark(pos, player2);
            g.print_board();

            winner = g.winner();
            if (winner != 0)
            {
                break;
            }
            system("cls");
        }

        if (winner == 0)
        {
            cout << "It's a Draw Match" << endl;
        }
        else if (winner == 1)
        {
            cout << "Player: " << players.first.first << " wins the game" << endl;
        }
        else
        {
            cout << "Player: " << players.second.first << " wins the game" << endl;
        }
        
    

    system("pause");
}