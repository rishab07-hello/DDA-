#include <iostream>
#include<bits/stdc++.h>
#define lld long long int
#define f first
#define s second
#define pb push_back
using namespace std;
void solve()
{
    int n,k;
     cin >> n;
     int arr[n];
        for(int i=0;i<n;i++)
            cin >> arr[i];
        cin >> k;
        int count =1;
        for(int i=0;i<n;i++){
            for(int j=i;j<n-i-1;j++){
                if(arr[i]-arr[j]==k || arr[i]-arr[j]==-k){
                count++;
                }
            }
        }
        cout << count << endl;

}
int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	int i=1;
	while(i<=t)
	{
	   //cout<<"Case #"<<i<<": ";
	    solve();
	    i++;
	}
	return 0;
}
