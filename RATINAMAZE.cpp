#include <iostream>
#define N 4
#include<bits/stdc++.h>
using namespace std;

void print_sol(int sol[N][N])
{
    for(int i=0; i < N; i++)
    {
        for(int j=0; j < N; j++)
        {
            cout<<sol[i][j]<<" ";
        }
        cout<<"\n";
    }
}
bool issafe(int Maze[N][N] , int x , int y)
{
    if(x >= 0 && x < N && y >= 0 && y < N && Maze[x][y]==1)
    {
        return true;
    }
    return false;

}
bool solve(int Maze[N][N], int x, int y, int solution[N][N]);
bool solveMaze(int Maze[N][N])
{
    int solution[N][N]={{ 0, 0, 0, 0 },
                    { 0, 0, 0, 0 },
                    { 0, 0, 0, 0 },
                    { 0, 0, 0, 0 }};
    if(solve(Maze,0,0,solution)==false)
    {
        cout<<"Solution doesn't exist";
        return false;
    }
    print_sol(solution);
    return true;

}
bool solve(int Maze[N][N], int x, int y, int solution[N][N])
{
    if(x==N-1 && y==N-1 && Maze[x][y]==1)
    {
        solution[x][y]=1;
        return true;

    if(issafe(Maze , x,y)== true)
    {
        if(solution[x][y]==1)
        {
            return false;
        }
        solution[x][y]=1;
    }
    if(solve(Maze , x, y+1 , solution)== true)
    {
        return true;
    }
    solution[x][y]=0;
    return false;
}
return false;
}
int main()
{
     int Maze[N][N] = { { 1, 0, 0, 0 },
                    { 1, 1, 0, 1 },
                    { 0, 1, 0, 0 },
                    { 1, 1, 1, 1 }};
    solveMaze(Maze);

    return 0;
}
