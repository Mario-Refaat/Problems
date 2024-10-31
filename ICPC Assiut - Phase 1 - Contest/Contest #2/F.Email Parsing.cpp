#include <iostream>
using namespace std;

bool IsVaild(string s) {

	bool flag1 = true, flag2 = true;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '@') {
			if (i == 0 || !flag1) return false;
			flag1 = false;
		}
		if (s[i] == '.') {
			if (flag1 || !flag2 || s[i - 1] == '@' || i == s.size() - 1) return false;
			flag2 = false;
		}
	}

	return (!flag1 && !flag2);
}

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	//cin >> t;

	while (t--) {

		string s;
		cin >> s;

		cout << (IsVaild(s) ? "YES" : "NO");
	}

	return 0;
}