#include <iostream>
#include<bits/stdc++.h>
#define lld long long int
#define f first
#define s second
#define pb push_back
using namespace std;
char freq[26];
void sumPairIsEqToK(int arr[],int n,int key){
	//out.open("output.txt");
	int left=0;
	int right=n-1;
	int flag=0;
	while(left<right){
		if(arr[left]+arr[right]==key){
			cout << arr[left] << " " << arr[right] << ", ";
			right--;
			flag++;
		}
		else if(arr[left]+arr[right]>key){
			right--;
		}
		else if(arr[left]+arr[right]<key){
			left++;
		}
	}
	//cout << endl;
	if(flag==0)
			cout << "No Such Pair Exist\n";
		else
			cout << endl;
	//return flag;
}

void solve()
{
        int n;
        cin >> n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin >> arr[i];
		int k;
		cin >> k;
		sort(arr,arr+n);
	 	sumPairIsEqToK(arr,n,k);
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
