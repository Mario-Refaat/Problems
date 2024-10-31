#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '?' && s[s.size() - i - 1] == '?') //??
		{
			s[i] = 'a';
			s[s.size() - i - 1] = 'a';
		}

		else if (s[i] == '?') //?z
			s[i] = s[s.size() - i - 1];

		else if (s[s.size() - i - 1] == '?') //z?
			s[s.size() - i - 1] = s[i];

		else if (s[i] != s[s.size() - i - 1]) //xz
		{
			cout << -1;
			return 0;
		}

	}

	cout << s;

	return 0;
}