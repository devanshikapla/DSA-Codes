#include <iostream>
#include<bits/stdc++.h>
#define V 4
using namespace std;
void print_solution(int color[])
{
    for(int i=0; i < V; i++)
    {
        cout<<" "<<color[i];
    }
    cout<<"\n";
}
bool isSafe(bool graph[V][V], int color[])
{
    // check for every edge
    for (int i = 0; i < V; i++)
        for (int j = i + 1; j < V; j++)
            if (graph[i][j] && color[j] == color[i])
                return false;
    return true;
}

bool graphcoloring(bool graph[V][V], int m, int i, int color[V])
{
    if(i==V)
    {
        if(isSafe(graph , color))
        {
            print_solution(color);
            return true;
        }
        return false;
    }
    for(int j=1; j <= m; j++)
    {
        color[i]=j;
        if(graphcoloring(graph,m,i+1 , color));
        {

            return true;
        }
        color[i]=0;
    }
    return false;
}


int main()
{
     bool graph[V][V] = {
        { 0, 1, 1, 1 },
        { 1, 0, 1, 0 },
        { 1, 1, 0, 1 },
        { 1, 0, 1, 0 },
    };
    int m = 3;
    int color[V];
    for(int i=0; i < V; i++)
    {
        color[i]=0;
    }

    return 0;
}
