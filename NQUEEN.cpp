include <iostream>
#include<stdbool.h>
#include<stdio.h>
#define N 4

using namespace std;
void print_sol(int board[N][N])
{
    for(int i=0; i  < N;i++)
    {
        for(int j=0; j < N; j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<"\n";
    }
}
bool issafe(int board[N][N] , int row , int col)
{
    int i=row,j=col;
    while(row >=0 && col >= 0)
    {
        if(board[row][col]==1)
        {
            return false;
            row--;
            col--;
        }
    }
    col=j;
    row=i;
    while(col >= 0)
    {
        if(board[row][col]==1)
        {
            return false;
            col--;
        }

    }
    row=i;
    col=j;
    while(row < N && col >=0 )
    {
        if(board[row][col]==1)
        {
            row++;
            col--;
        }
    }

}
bool Nqueen(int board[N][N], int row)
{
    if(row==N)
    {
        return true;
    }
    for(int col=0; col < N; col++)
    {
        if(issafe(board , row , col))
        {
            board[row][col]=1;

        }
        if(Nqueen(board, row+1))
        {
            return true;
        }
        board[row][col]=0;
    }
    return false;
}
bool solve()

{
    int board[N][N] = { { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 } };
    if(Nqueen(board , 0)==false)
    {
        cout<<"Terminate"<<endl;
        return false;
    }
    print_sol(board);
    return true;
}
int main()
{
    solve();
    return 0;
}
