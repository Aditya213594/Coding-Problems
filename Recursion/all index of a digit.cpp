#include<bits/stdc++.h>
using namespace std;

int printSeq(int arr[], int n, int x, int store[])
{
	if (n == 0)
	{
		if (arr[n] == x)
		{
			store[0] = n;
			return 1;
		}
		else
		{
			return 0;
		}
	}

	int ans = printSeq(arr, n - 1, x, store);

	if (arr[n - 1] == x)
	{
		store[ans] = n - 1;
		ans = ans + 1;
	}
	return ans;
	// printSeq(arr,n-1,x,store);
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int x;
	cin >> x;

	int store[n];

	for (int i = 0; i < n; i++)
	{
		store[i] = -1;
	}

	int size = printSeq(arr, n, x, store);

	if (size != 0)
	{
		for (int i = 0; i < size; i++)
		{
			cout << store[i] << " ";
		}
	}
	else
	{
		cout << "-1" << "\n";
	}

	// if (ans != -1)
	// {
	// 	cout << n - ans << "\n";
	// }
	// else
	// {
	// 	cout << ans << "\n";
	// }
	// if (store[0] != -1)
	// {
	// 	int i = 0;
	// 	while (i < n && store[i] != -1)
	// 	{
	// 		cout << store[i] << " ";
	// 		i++;
	// 	}
	// }
	// else
	// {
	// 	cout << "-1" << "\n";
	// }

}