
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
// structure for weighted edge of the graph;
struct Edge{
    int src, dest,weight;
};
//struct to represent a weighted graph
struct Graph{
    int V,E; // v-> number of vertices  and E-> number of edges
    struct Edge* edge;//graph is represented as array of edges
};

struct Graph* createGraph(int V , int E)
{
    struct Graph* graph=new Graph;
    graph->V=V;
    graph->E=E;
    graph->edge= new Edge[E];
    return graph;
}

void print(int dist[] , int n)
{
    for(int i=0; i < n; i++)
    {
        cout<<dist[i]<<" "<<i<<endl;
    }
}

void bellmanford(struct Graph* graph , int source)
{
    int j;
    int V=graph->V;
    int E=graph->E;
    int dist[V];
    
    for(int i=0; i < V; i++)
    {
        dist[i]=INT_MAX;
    }
    dist[source]=0;
    for(int i=1 ; i < V; i++)
    {
        for(j=0; j < E ;j++)
        {
            int u=graph->edge[j].src;
            int v=graph->edge[j].dest;
            int weight=graph->edge[j].weight;
            if(dist[u]!=INT_MAX && dist[u]+weight < dist[v])
            {
                dist[v]=dist[u]+weight;
            }
        }
    }
    for(int i=0;  i < E; i++)
    {
        int u=graph->edge[j].src;
        int v=graph->edge[j].dest;
        int weight=graph->edge[j].weight;
        if(dist[u]!=INT_MAX && dist[u]+weight < dist[v])
        {
            cout<<"Graph contains negative weighted edges";
            return;
        }
    }
    print(dist,V);
}

int main()
{
   // cout<<"Hello World";
   int v=5;
   int e=8;
   struct Graph* graph=createGraph(v,e);
   graph->edge[0].src=0;
   graph->edge[0].dest=1;
   graph->edge[0].weight=-1;
   
   graph->edge[1].src=0;
   graph->edge[1].dest=2;
   graph->edge[1].weight=4;
   
   graph->edge[2].src = 1;
    graph->edge[2].dest = 2;
    graph->edge[2].weight = 3;
 
    
    graph->edge[3].src = 1;
    graph->edge[3].dest = 3;
    graph->edge[3].weight = 2;
 
    graph->edge[4].src = 1;
    graph->edge[4].dest = 4;
    graph->edge[4].weight = 2;
 
    graph->edge[5].src = 3;
    graph->edge[5].dest = 2;
    graph->edge[5].weight = 5;
 
    graph->edge[6].src = 3;
    graph->edge[6].dest = 1;
    graph->edge[6].weight = 1;
 

    graph->edge[7].src = 4;
    graph->edge[7].dest = 3;
    graph->edge[7].weight = -3;
    bellmanford(graph,0);
 
    return 0;
}
