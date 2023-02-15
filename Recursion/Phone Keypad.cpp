#include<bits/stdc++.h>
using namespace std;

int phone(int n, string output[], string keyPad[])
{
	if (n <= 0)
	{
		output[0] = "";
		return 1;
	}

	int currSize = phone(n / 10, output, keyPad);
	string temp[currSize];

	for (int i = 0; i < currSize; i++)
	{
		temp[i] = output[i];
	}

	int k = 0;

	for (int i = 0; i < keyPad[n % 10].size(); i++)
	{
		for (int j = 0; j < currSize; j++)
		{
			output[k] = temp[j] + keyPad[n % 10][i];
			k++;
		}
	}

	return k;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string keyPad[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

	int n;
	cin >> n;

	int size = 1;

	int k = n;
	while (k > 0)
	{
		int j = k % 10;
		size = size * keyPad[j].length();
		k = k / 10;
	}

	string output[size];

	int ans_size = phone(n, output, keyPad);

	for (int i = 0; i < ans_size; i++)
	{
		cout << output[i] << "\n";
	}



}