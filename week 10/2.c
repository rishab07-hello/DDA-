#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define lld long long int
#define pb push_back
#define deb(x) cout << #x << "=" << x <<"\n"
bool cmp(pair<int,int> a,pair<int,int> b)
{
  return a.second<b.second;
}
void solve()
{
int n;
cin>>n;
vector<pair<int,int>> ans;
for(int i=0;i<n;i++)
{
  int a,b;
  cin>>a>>b;
  ans.push_back(make_pair(a,b));
}
sort(ans.begin(),ans.end(),cmp);
int start=ans[0].second;int count=1;
for(int i=1;i<n;i++)
{
 if(ans[i].first<start)
 {
  continue;
 }
 else
 {
   start=ans[i].second;
  count++;
 }
}
cout<<count<<"\n";

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