
#include <iostream>
#include <bits/stdc++.h>
#define V 4
#define INF 999999
using namespace std;

void print_solution(int dist[][V])
{
    for(int i=0; i < V ; i++)
    {
        for(int j=0; j < V; j++)
        {
            if(dist[i][j]==INF)
            {
                cout<<"INF"<<" ";
            }
            else
            {
                cout<<dist[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}

void FloydWarshal(int graph[][V])
{
    int dist[V][V];
    for(int i=0; i < V; i++)
    {
        for(int j=0; j < V ; j++)
        {
            dist[i][j]=graph[i][j];
        }
    }
    for(int k=0; k < V; k++)
    {
        for(int i=0; i < V; i++)
        {
            for(int j=0; j < V ;j++)
            {
                dist[i][j]=min(dist[i][j] , dist[i][k]+dist[k][j]);
            }
        }
    }
    print_solution(dist);
}
int main()
{
    int graph[V][V]={{0,5,INF,10},
    {INF, 0,3,INF},
    {INF, INF, 0,1},
    {INF,INF,INF,0}
    };
    FloydWarshal(graph);
    //FloydWarshal(graph);
    return 0;
}
