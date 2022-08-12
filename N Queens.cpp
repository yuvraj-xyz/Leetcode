#include <bits/stdc++.h>
using namespace std;

// N-Queens
bool isSafe(int row, int col, vector<string> &board, int n)
{
    // Upper Diagonal Check
    int dupRow = row;
    int dupCol = col;
    while(row>=0 && col>=0)
    {
        if(board[row][col] == 'Q')
        {
            return false;
        }
        row--;
        col--;
    }
    // Left Side Row check
    row = dupRow;
    col = dupCol;
    while(col>=0)
    {
        if(board[row][col]=='Q')
        {
            return false;
        }
        col--;
    }
    // Lower Diagonal Check
    row = dupRow;
    col = dupCol;
    while(row<n && col>=0)
    {
        if(board[row][col] == 'Q')
        {
            return false;
        }
        row++;
        col--;
    }
    return true;
}
void solve(int col, vector<vector<string>> &res, vector<string> &board, int n)
{
    if(col == n)
    {
        res.push_back(board);
        return;
    }
    for(int row=0; row<n; row++)
    {
        if(isSafe(row, col, board, n))
        {
            board[row][col] = 'Q';
            solve(col+1, res, board, n);
            board[row][col] = '.';
        }
    }
}
int main()
{
    int n = 4;

    vector<vector<string>> res;
    vector<string> board(n);
    string s(n, '.');
    for(int i=0; i<n; i++)
    {
        board[i] = s;
    }
    solve(0, res, board, n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << res[i][j] << endl;
        }
        cout << endl;
    }
}
