#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define lld long long int
#define pb push_back
#define deb(x) cout << #x << "=" << x <<"\n"
int count(vector<vector<int>>&dp,int index,int sum,int arr[],int n)
{
  if(sum==0)
    return 1;
   if(index>=n||sum<0)
    return 0;
  if(dp[index][sum]!=-1)
    return dp[index][sum];
  int l=count(dp,index,sum-arr[index],arr,n);
  int r=count(dp,index+1,sum,arr,n);
  return dp[index][sum]=l+r;
}

void solve()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  int sum;
  cin>>sum;
  vector<vector<int>>dp(n,vector<int>(sum+1,-1));
  cout<< count(dp,0,sum,arr,n);
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