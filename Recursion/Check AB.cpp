#include<bits/stdc++.h>
using namespace std;

bool checkAb(string s)
{
	if (s.length() == 0 || s.length() == 1)
	{
		return true;
	}

	if (s[0] == 'a')
	{
		if (s.length() == 2 && s[1] == 'b')
		{
			return false;
		}
		else if (s[1] == 'b' && s[2] == 'a')
		{
			return false;
		}
	}
	else if (s[0] == 'b')
	{
		if (s[1] == 'a')
		{
			return false;
		}
		else if (s.length() > 2 && s[2] == 'b')
		{
			return false;
		}
		return true & checkAb(s.substr(2));
	}

	return true & checkAb(s.substr(1));
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s;
	cin >> s;

	if (s[0] != 'a')
	{
		cout << "0" << "\n";
	}
	else
	{
		cout << checkAb(s) << "\n";
	}
}