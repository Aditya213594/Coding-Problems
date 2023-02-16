#include<bits/stdc++.h>
using namespace std;

int count(int n)
{
	if (n < 0)
	{
		return 0;
	}

	if (n <= 1)
	{
		return 1;
	}

	return count(n - 1) + count(n - 2) + count(n - 3);
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	cout << count(n);
}