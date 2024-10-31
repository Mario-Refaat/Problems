#include <iostream>
using namespace std;

int prefmx[100002], sfxmx[100002];

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	//cin >> t;

	while (t--) {

		int arr[100002] = { 0 }, n;
		cin >> n;

		for (int i = 1; i <= n; i++)
		{
			cin >> arr[i];
			prefmx[i] = arr[i];
			sfxmx[i] = arr[i];
		}

		for (int i = 1; i <= n; i++) prefmx[i] = max(prefmx[i - 1], prefmx[i]);
		for (int i = n; i >= 1; i--) sfxmx[i] = max(sfxmx[i + 1], sfxmx[i]);


		for (int i = 1; i <= n; i++) {
			if (arr[i] >= prefmx[i] && arr[i] >= sfxmx[i + 1]) cout << "both\n";
			else if (arr[i] >= prefmx[i]) cout << "left\n";
			else if (arr[i] >= sfxmx[i + 1]) cout << "right\n";
			else cout << "none\n";
		}


	}

	return 0;
}