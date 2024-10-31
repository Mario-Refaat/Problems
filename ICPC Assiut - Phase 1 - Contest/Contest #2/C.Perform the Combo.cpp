#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	cin >> t;

	while (t--) {

		long long n, m, arr[200001], freq[26] = { 0 }, j = 0;
		string s;

		cin >> n >> m >> s;

		for (int i = 0; i < m; i++) cin >> arr[i];

		sort(arr, arr + m);

		for (int i = 0; i < s.size(); i++) {
			int ch = s[i] - 'a';
			if (j > m) j = m;
			freq[ch] += m - j + 1;
			if (arr[j] == i + 1)
			{
				j++;
				while (arr[j] == arr[j - 1])j++;
			}
		}

		for (int i = 0; i < 26; i++)
			cout << freq[i] << " ";

		cout << '\n';
	}

	return 0;
}