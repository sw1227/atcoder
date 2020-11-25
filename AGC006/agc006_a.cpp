#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    string s, t;
    cin >> s;
    cin >> t;

    // 最長でも s + t
    int res = 0;
    for (int i = 0; i <= N; i++) {
        // 先頭からiだけズレる
        bool ok = true;
        for (int j = i; j < N; j++) {
            if (s[j] != t[j - i]) {
                ok = false;
                break;
            }
        }

        if (ok) {
            res = N + i;
            break;
        }
    }

    cout << res << endl;
}