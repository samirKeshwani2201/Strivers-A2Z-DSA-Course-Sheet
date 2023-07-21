#include <iostream>
using namespace std;

bool isValid(char board[9][9], int row, int col, char c)
{
    // This function is for checking the validity of a particular character
    // in all the three ways
    for (int i = 0; i < 9; i++)
    {
        // Checking validitiy in the particular colom
        if (board[i][col] == c)
        {
            return false;
        }

        // Checking validitiy in the row
        if (board[row][i] == c)
        {
            return false;
        }

        // Checking validity in square of 3X3:

        if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c)
        {
            return false;
        }
    }
    // Checked for all three cases and so return true
    return true;
}

bool solve(char board[9][9])
{

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (board[i][j] == '.')
            {
                // If there  is empty space found then try all possible characters :
                for (char c = '1'; c <= '9'; c++)
                {
                    if (isValid(board, i, j, c))
                    {
                        board[i][j] = c;
                        // Recursive call:
                        if (solve(board) == true)
                        {
                            return true;
                        }
                        else
                        {
                            // If not possible solution then we backtrack:
                            board[i][j] = '.';
                        }
                    }
                }

                // If no character fits so return false :
                return false;
            }
        }
    }
    // Will reach here if all the rows and coloms are being filled:
    return true;
}

void solveSudoku(char board[9][9])
{
    solve(board);
}

int main()
{
    char board[9][9];

    cout << "Enter the suduko and enter '.' for empty cell:";
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >>
                board[i][j];
        }
    }
    int flag = 0;

    // Checking for the validity of the inserted suduko by the user:
    for (int row = 0; row < 9; row++)
    {
        for (int col = 0; col < 9; col++)
        {
            char c = board[row][col];

            for (int i = 0; i < 9; i++)
            {
                // Checking validitiy in the particular colom
                if (board[i][col] == c && board[i][col] != '.')
                {
                    flag++;
                }

                // Checking validitiy in the row
                if (board[row][i] == c && board[row][i] != '.')
                {
                    flag++;
                }


                // Checking validity in square of 3X3:

                if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c && board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] != '.')
                {
                    
                    flag++;
                }
            }

            if (flag > 3)
            {
                cout << "Invalid suduko:";

                return 0;
            }
            flag = 0;
        }
    }

    // If valid then call the function:
    solveSudoku(board);
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

// output will be:
/*

1 2 3 4 5 6 7 8 9
4 5 6 7 8 9 1 2 3
7 8 9 1 2 3 4 5 6
2 1 4 3 6 5 8 9 7
3 6 5 8 9 7 2 1 4
8 9 7 2 1 4 3 6 5
5 3 1 6 4 2 9 7 8
6 4 2 9 7 8 5 3 1
9 7 8 5 3 1 6 4 2
*/
