#include<bits/stdc++.h>
using namespace std;

void subSequence(string s, string output)
{
	if (s.length() == 0)
	{
		cout << output << "\n";
		return;
	}

	subSequence(s.substr(1, s.length() - 1), output);
	output = output + s[0];
	subSequence(s.substr(1, s.length() - 1), output);
	// cout << output << "\n";
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s;
	cin >> s;

	string output = "";
	subSequence(s, output);

}