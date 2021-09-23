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
	int temp;
	int arr[n];
    cin >> n;
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		cin >> k;
		int left = 0;
		int right = n-1;
		temp=0;
		int index;
		while(left<=right){
			int mid = left + ((right-left)/2);
			if(arr[mid]==k){
				index=mid;
				temp=1;
				break;
			}else if(arr[mid]>k){
				right = mid-1;
			}
			else{
				left = mid+1;
			}
		}
		if(temp==0){
			cout << "Key not Present";
		}
		else{
			int count=1;
			int left_side = index-1;
			while(left_side>=0 && arr[left_side]==k){
				count++;
				left_side--;
			}
			int right_side=index+1;
			while(right_side<n && arr[right_side]==k){
				count++;
				right_side++;
			}
			cout << k << " - " << count << endl; 
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
