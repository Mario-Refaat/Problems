#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	//cin >> t;

	while (t--) {

		int freq[26] = { 0 }, mostfreq[100001] = { 0 };
		bool flag = true;

		string s;
		cin >> s;

		for (int i = 0; i < s.size(); i++) {
			freq[s[i] - 'a']++;
		}

		for (int i = 0; i < 26; i++) {
			mostfreq[freq[i]]++;
		}

		int most = 0, mx = 0;

		for (int i = 1; i <= 100000; i++) {
			if (mx <= mostfreq[i])
			{
				mx = mostfreq[i];
				most = i;
			}
		}

		for (int i = 0; i < 26; i++) {
			if (freq[i] == most || freq[i] == 0) continue;
			else if (freq[i] - 1 == most || freq[i] == 1 && flag) flag = false;
			else { cout << "NO"; return 0; }
		}

		cout << "YES";
	}

	return 0;
}