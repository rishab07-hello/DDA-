#include <iostream>
#include<bits/stdc++.h>
#define lld long long int
#define f first
#define s second
#define pb push_back
using namespace std;
void solve()
{
    int co,r,key,com,shif;
    com=shif=0;
    int ar[1000];
        cin>>co;
        for(int j=0;j<co;j++)
        {
            cin>>ar[j];
        }
        for(int k=1;k<co;k++)
        {
            key=ar[k];
            r=k-1;
            while(r>=0 &&ar[r]>key)
            {
                com++;
                shif++;
                ar[r+1]=ar[r];
                r--;
            }
            shif++;
            ar[r+1]=key;
        }
        for(int z=0;z<co;z++)
        cout<<ar[z]<<" ";
        cout<<endl;
        cout<<"comparisions  "<<com<<endl;
        cout<<"shifts  "<<shif<<endl;

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
