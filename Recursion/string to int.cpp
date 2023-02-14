#include<bits/stdc++.h>
using namespace std;

int convert(string s)
{
	if (s.length() == 0)
	{
		return 0;
	}

	int ans = convert(s.substr(1, s.length() - 1));

	int dig = s[0] - 48;

	ans = (dig * pow(10, s.length() - 1)) + ans;

	return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string a;
	cin >> a ;

	// if (a > b)
	// {
	// 	swap(a, b);
	// }



	cout << convert(a) << "\n";

}