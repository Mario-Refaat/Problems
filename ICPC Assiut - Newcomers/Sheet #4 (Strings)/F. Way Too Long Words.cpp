#include <iostream>
#include <string>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        if (s.size() > 10)
            cout << s[0] << s.size() - 2 << s[s.size() - 1] << "\n";
        else
            cout << s << "\n";
    }

    return 0;
}
