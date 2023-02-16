#include<bits/stdc++.h>
using namespace std;

void printKeypad(int n, string output, string keyPad[])
{
	if (n == 0)
	{
		cout << output << "\n";
		return;
	}

	for (int i = 0; i < keyPad[n % 10].size(); i++)
	{
		printKeypad(n / 10, keyPad[n % 10][i] + output, keyPad);
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

	string keyPad[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};


	printKeypad(n, "", keyPad);
}