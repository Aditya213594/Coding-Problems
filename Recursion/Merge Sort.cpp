// Merge Sort

#include<bits/stdc++.h>
using namespace std;

void mergeArr(int arr[], int s, int mid, int e)
{
	int p = mid - s + 1;
	int q = e - mid;

	int left[p];
	int right[q];

	for (int i = 0; i < p; i++)
	{
		left[i] = arr[i + s];
	}

	for (int i = 0; i < q; i++)
	{
		right[i] = arr[i + mid + 1];
	}

	int i = 0;
	int j = 0;
	int k = s;

	while (i < p && j < q)
	{
		if (left[i] < right[j])
		{
			arr[k++] = left[i++];
		}
		else
		{
			arr[k++] = right[j++];
		}
	}

	while (i < p)
	{
		arr[k++] = left[i++];
	}
	while (j < q)
	{
		arr[k++] = right[j++];
	}
}

void mergeSort(int arr[], int s, int e)
{
	if (s < e)
	{
		int mid = (s + e) / 2;
		mergeSort(arr, s, mid);
		mergeSort(arr, mid + 1, e);
		mergeArr(arr, s, mid, e);
	}
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

	mergeSort(arr, 0, n);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}