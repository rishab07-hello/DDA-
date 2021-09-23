#include <iostream>
#include<bits/stdc++.h>
#define lld long long int
#define f first
#define s second
#define pb push_back
using namespace std;
void solve()
{
     int n;
    int arr[100];
    int flag;
   cin >> n;
   int ifinal,jfinal,kfinal;
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n-i-1;j++){
                int sum=0;
                sum += arr[i] + arr[j];
                for(int k=0;k<n;k++){
                    if(sum==arr[k]){
                        ifinal=i+1;
                        jfinal=j+1;
                        kfinal=k+1;
                        flag=1;
                    }
                }
            }
        }
    //t--;
    if(flag==1){

            cout << ifinal << "," << jfinal << "," << kfinal << endl;
        }
    else{
    cout << "No Sequence Found"<<endl;
    }
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
