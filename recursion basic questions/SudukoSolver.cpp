#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void printBoard(vector<vector<int>> &board)
{
    for (auto &row : board)
    {
        cout << "[   ";
        for (auto &val : row)
        {
            cout << val << "   ";
        }
        cout << "  ]";
        cout << endl;
    }
}

bool isSafe(vector<vector<int>> &board, int row, int col, int num)
{
    // Check col & row
    int n = board.size();
    for (int i = 0; i < n; i++)
    {
        if (board[row][i] == num || board[i][col] == num)
        {
            return false;
        }
    }
    // check 3*3 subgrid matrix
    int startRow = row - (row % 3);
    int startCol = col - (col % 3);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[startRow + i][startCol + j] == num)
            {
                return false;
            }
        }
    }
    return true;
}

bool solveSudoku(vector<vector<int>> &board, int row, int col)
{
    int n = board.size();
    if (row == n - 1 && col == n)
    {
        return true;
    }

    if (col == n)
    {
        return solveSudoku(board, row + 1, 0);
    }

    if (board[row][col] != 0)
    {
        return solveSudoku(board, row, col + 1);
    }

    for (int num = 1; num <= n; num++)
    {
        if (isSafe(board, row, col, num))
        {
            board[row][col] = num;
            if (solveSudoku(board, row, col + 1))
                return true;
            board[row][col] = 0;
        }
    }

    return false;
}

int main()
{
    vector<vector<int>> board = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},

        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},

        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}};

    if (solveSudoku(board, 0, 0))
    {
        cout << "Solved Sudoku:\n";
        printBoard(board);
    }
    else
    {
        cout << "No solution exists!";
    }

    return 0;
}
