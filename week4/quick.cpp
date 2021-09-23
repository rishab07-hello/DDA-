#include <iostream>
#include<bits/stdc++.h>
#define lld long long int
#define f first
#define s second
#define pb push_back
using namespace std;
int NComparison, NSwap;

int makePivot(int arr[], int l, int h)
{
    int p = arr[h];
    int i = l - 1, j = l;
    for (; j < h; ++j)
    {
        ++NComparison;
        if (arr[j] <= p)
        {
            ++NSwap;
            int t = arr[++i];
            arr[i] = arr[j];
            arr[j] = t;
        }
    }
    NSwap++;
    int t = arr[++i];
    arr[i] = arr[j];
    arr[j] = t;
    return i;
}

void quickSort(int arr[], int l, int h)
{
    if (l < h)
    {
        int pivot = makePivot(arr, l, h);
        quickSort(arr, l, pivot - 1);
        quickSort(arr, pivot + 1, h);
    }
}

void solve()
{
        NComparison = NSwap = 0;
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        quickSort(arr, 0, n - 1);
        for (int i = 0; i < n; ++i)
            cout << arr[i] << " ";
        cout << "\nComparisons = " << NComparison << endl;
        cout << "Swaps = " << NSwap << endl;
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
