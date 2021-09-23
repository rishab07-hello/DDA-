#include <iostream>
#include<bits/stdc++.h>
#define lld long long int
#define f first
#define s second
#define pb push_back
using namespace std;
int findKSmallest(int arr[], int l, int h, int k)
{
    int p = arr[h], i = l - 1, j = l;
    for (; j <= h; ++j)
    {
        if (arr[j] <= p)
        {
            int t = arr[++i];
            arr[i] = arr[j];
            arr[j] = t;
        }
    }
    if (i == k)
        return arr[i];
    else if (i < k)
        return findKSmallest(arr, i + 1, h, k);
    else
        return findKSmallest(arr, l, i - 1, k);
}

void solve()
{
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        int k;
        cin >> k;
        k = k <= n ? k - 1 : n - 1;
        cout << findKSmallest(arr, 0, n - 1, k) << endl;
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
