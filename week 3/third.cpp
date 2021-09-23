#include <iostream>
#include<bits/stdc++.h>
#define lld long long int
#define f first
#define s second
#define pb push_back
using namespace std;
void qsort(int ar[],int low,int high)
{
    if(low<high)
    {
   int pivot=ar[high];
   int i=low-1;
   int temp;
   for(int j=low;j<high;j++)
   {
       if(ar[j]<pivot)
       {
            i++;
           temp=ar[i];
           ar[i]=ar[j];
           ar[j]=temp;
          
       }
   }
     temp=ar[i+1];
           ar[i+1]=ar[high];
           ar[high]=temp;
   qsort(ar,low,i);
   qsort(ar,i+2,high);
    }
}
void solve()
{
    int ar[10000];
    int t,co,com;
    cin>>co;
        for(int j=0;j<co;j++)
        {
            cin>>ar[j];
        }
        qsort(ar,0,co-1);
        cout<<endl;

        com=0;
        for(int j=0;j<co-1;j++)
        {
            if(ar[j]==ar[j+1])
            {
                cout<<"YES"<<endl;
                com=1;
                break;
        }
        }
        if(com==0)
        cout<<"NO"<<endl;
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
