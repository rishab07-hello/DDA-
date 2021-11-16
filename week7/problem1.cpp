#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define lld long long int
#define pb push_back
#define deb(x) cout << #x << "=" << x <<"\n"
void  dijkstra(vector<vector<int>> graph,int source,int n)
{
  int dist[n];
int path[n];
path[source]=-1;
  for(int i=0;i<n;i++){
    dist[i]=INT_MAX;
  }
  bool visited[n]={false};
  dist[source]=0;
  for(int i=0;i<n-1;i++)
  {
   
      int min = INT_MAX, min_index;
    for (int v = 0; v < n; v++){
        if (visited[v] == false && dist[v] <= min){
            min = dist[v];
            min_index = v;
          }
        }
    
    
          visited[min_index]=true;
          for(int v=0;v<n;v++)
          {
              if (visited[v]==false&& graph[min_index][v] !=0
                &&dist[min_index] + graph[min_index][v] < dist[v]){
                path[v] = min_index;
                dist[v] = dist[min_index] + graph[min_index][v];
            }
          }
  }

  for(int i=0;i<n;i++){
    int value=i;
    while(value!=-1)
    {
        cout<<value+1<<" ";
        value=path[value];
    }
    cout<<":";
    cout<<dist[i]<<"\n";
  }
}
void solve()
{
int n;
cin>>n;
vector<vector<int>> graph;
for(int i=0;i<n;i++)
{
  vector<int> u;
  for(int j=0;j<n;j++){
    int a;
    cin>>a;
    u.pb(a);
  }
  graph.pb(u);
}
int vertex;
cin>>vertex;
dijkstra(graph,vertex-1,n);
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  ios::sync_with_stdio(0);
  cin.tie(0);
  lld t;
  // lld q=1;
  t = 1;
  // cin >> t;
  while (t--)
  {
    // cout<<"Case #"<<q<<": ";
    // q++;
    solve();
  }
  return 0;
}

