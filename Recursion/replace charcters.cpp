#include<bits/stdc++.h>
using namespace std;

string replace(string s, char c1, char c2)
{
	if (s.length() == 0)
	{
		return s;
	}

	if (s[0] == c1)
	{
		s[0] = c2;
	}

	return s[0] + replace(s.substr(1, s.length() - 1), c1, c2);
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s;
	cin >> s;

	char c1, c2;
	cin >> c1 >> c2;

	cout << replace(s, c1, c2) << " ";

	cout << s << " ";
}
