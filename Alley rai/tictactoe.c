#include <iostream>
#include <stdlib.h>
using namespace std;

char board[3][3];
char player = 'X';

void initBoard()
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            board[i][j] = ' ';
}

void drawBoard()
{
    cout << "   1   2   3" << endl;
    cout << "  -----------" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << i+1 << " |";
        for (int j = 0; j < 3; j++)
            cout << " " << board[i][j] << " |";
        cout << endl;
        cout << "  -----------" << endl;
    }
}

bool checkWin()
{
    // Horizontal
    for (int i = 0; i < 3; i++)
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return true;
    // Vertical
    for (int i = 0; i < 3; i++)
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            return true;
    // Diagonal
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        return true;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
        return true;
    return false;
}

void changePlayer()
{
    if (player == 'X')
        player = 'O';
    else
        player = 'X';
}

bool placeMark(int row, int col)
{
    if (row < 1 || row > 3 || col < 1 || col > 3 || board[row-1][col-1] != ' ')
        return false;
    board[row-1][col-1] = player;
    return true;
}

int main()
{
    initBoard();
    drawBoard();
    while (!checkWin())
    {
        int row, col;
        cout << "Player " << player << "'s turn. Enter row and column (e.g. 1 2): ";
        cin >> row >> col;
        if (placeMark(row, col))
        {
            drawBoard();
            changePlayer();
        }
        else
            cout << "Invalid move!" << endl;
    }
    cout << "Player " << player << " wins!" << endl;
    system("pause");
    return 0;
}

