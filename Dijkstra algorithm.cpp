
#include <iostream>
#include <bits/stdc++.h>
#include <climits>
#define V 9

using namespace std;

void print_distance(int dist[])
{
    for(int i=0; i < V ; i++)
    {
        cout<<i<<"\t"<<dist[i]<<endl;
    }
}

int min_distance(int dist[] , bool sptset[])
{
    int min=INT_MAX , min_index;
    for(int i=0; i < V; i++)
    {
        if(sptset[i]==false && dist[i] <= min)
        {
            min=dist[i],min_index=i;
        }
    }
    return min_index;
}

void dijkstra(int graph[V][V] , int src)
{
    int dist[V];
    bool sptset[V];
    
    for(int i=0; i < V; i++)
    {
        dist[i]=INT_MAX;
        sptset[i]=false;
    }
    dist[src]=0;
    for(int i=0; i < V-1; i++)
    {
        int u=min_distance(dist,sptset);
        sptset[u]=true;
        for(int v=0; v < V; v++)
        {
            if(!sptset[v] && graph[u][v] && dist[u]!=INT_MAX && dist[u]+graph[u][v] < dist[v])
            {
                dist[v]=dist[u]+graph[u][v];
                
                
            }
        }
    }
    print_distance(dist);
}
int main()
{
   //cout<<"Hello World";
    int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };
    dijkstra(graph ,0);

    return 0;
}
