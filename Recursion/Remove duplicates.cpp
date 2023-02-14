//Given a string S, remove consecutive duplicates from it recursively.

#include<bits/stdc++.h>
using namespace std;

string removeDup(string s)
{
	if (s.length() == 0 || s.length() == 1)
	{
		return s;
	}

	int i = 1;
	while (s[0] == s[i] && i < s.length())
	{
		i++;
	}

	return s[0] + removeDup(s.substr(i, s.length() - i));
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s;
	cin >> s;

	cout << removeDup(s) << " ";
}