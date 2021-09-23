#include <iostream>
#include<bits/stdc++.h>
#define lld long long int
#define f first
#define s second
#define pb push_back
using namespace std;
void solve()
{
    int ar[10000];
    int mini,t,co,r,key,com,swa,temp;
    com=swa=0;
        cin>>co;
        for(int j=0;j<co;j++)
        {
            cin>>ar[j];
        }
        for(int k=0;k<co-1;k++)
        {
            mini=k;
            for(int h=k+1;h<co;h++)
            {
                com++;
                if(ar[h]<ar[mini])
                mini=h;
            }
            temp=ar[mini];
            ar[mini]=ar[k];
            ar[k]=temp;
            swa++;
        }
        for(int z=0;z<co;z++)
        cout<<ar[z]<<" ";
        cout<<endl;
        cout<<"comparisions  "<<com<<endl;
        cout<<"swaps  "<<swa<<endl;

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
