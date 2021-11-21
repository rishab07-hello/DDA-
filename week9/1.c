
#include <bits/stdc++.h>
using namespace std;
#define INF INT_MAX;
void printSolution(int dist[][V]);
void floydWarshall(int graph[][V],int )
{
 
    int dist[V][V], i, j, k;

    for (i = 0; i < V; i++)
        for (j = 0; j < V; j++)
            dist[i][j] = graph[i][j];


    for (k = 0; k < V; k++) {
        for (i = 0; i < V; i++) {
            for (j = 0; j < V; j++) {

                if (dist[i][j] > (dist[i][k] + dist[k][j])
                    && (dist[k][j] != INF
                        && dist[i][k] != INF))
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }
 printSolution(dist);
}
void printSolution(int dist[][V])
{
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (dist[i][j] == INF)
                cout << "INF"
                    << "     ";
            else
                cout << dist[i][j] << "  ";
        }
        cout << endl;
    }
}

int main()
{
int v;
cin>>v;
    int graph[v][v];
    for(int i=0;i<v;i++)
    {
      for(int j=0;j<v;j++)
      {
       int a;
       cin>>a;
       graph[i][j]=a;
      }
    }

    floydWarshall(graph);
    return 0;
}
