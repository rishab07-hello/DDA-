#include <iostream>
#include<bits/stdc++.h>
#define lld long long int
#define f first
#define s second
#define pb push_back
using namespace std;
void mark(int **G, int n, int k)
{
    for (int i = 0; i < n; ++i)
            G[i][k] = 2;
}
bool ispath(int **ar,int n,int s,int d)
{
   vector<int> st;
    st.push_back(s);
    mark(ar,n,s);
    int color[n]={1};
    while(!st.empty())
    {
        int u=st.back();
        st.pop_back();
        if(ar[u][d]==1)
        return true;
        else
        {
            for(int i=0;i<n;i++)
            if(ar[u][i]==1)
            st.push_back(i);
            mark(ar,n,u);
        }
            
    }
    return false;
}
void solve()
{
       int n,s,d;
    cin>>n;
    int **arr;
    arr=(int **)malloc(n*sizeof(int *));
    for(int i=0;i<n;i++)
    arr[i]=(int *)malloc(n*sizeof(int));  
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> arr[i][j];
    cin >> s >> d;
    if(ispath(arr,n,s-1,d-1))
    cout<<"Path exists";
    else
    cout<<"No Pathdoes not exist";
}
int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	//cin>>t;
	int i=1;
	//while(i<=t)
	//{
	   //cout<<"Case #"<<i<<": ";
	    solve();
	    i++;
	//}
	return 0;
}
