#include<bits/stdc++.h>
using namespace std;

int subSeq(string s, string output[])
{
	if (s.length() == 0)
	{
		output[0] = "";
		return 1;
	}

	int size1 = subSeq(s.substr(1, s.length() - 1), output);

	for (int i = 0; i < size1; i++)
	{
		output[size1 + i] = s[0] + output[i];
	}

	return 2 * size1;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s;
	cin >> s;

	int size = pow(2, s.length());
	string output[size];

	int total = subSeq(s, output);

	for (int i = 0; i < size; i++)
	{
		cout << output[i] << "\n";
	}
}