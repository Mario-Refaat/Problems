#include <iostream>
#include <cmath>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	//cin >> t;

	while (t--) {

		long long n, k, a, t, s, mn = LLONG_MAX;
		cin >> n >> k >> a;

		long long Total_sec = (long long)ceil(k / a);

		while (n--) {
			cin >> t >> s;
			long long curr = 0;
			long long rest = 0;
			for (int i = 1; i <= t; i++) {
				curr++;
				if (curr >= Total_sec) break;
				if (i == t) {
					rest += s;
					i = 0;
				}
			}
			mn = min(mn, curr + rest);
		}

		cout << mn;
	}

	return 0;
}