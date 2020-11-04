#include <iostream>

using namespace std;

int main() {
    string S;
    cin >> S;
    int len = S.length();

    int res = 0;
    for (int i = 0; i <= len; i++) {
        for (int j = 0; j <= len - i; j++) {
            string sub = S.substr(i, j);
            bool ok = true;
            int count = 0;
            for (auto c: sub) {
                if ((c == 'A') || (c == 'G') || (c == 'C') || (c == 'T')) {
                    count++;
                } else {
                    ok = false;
                    break;
                }
            }
            if (ok && (count > res)) res = count;
        }
    }
    cout << res << endl;
}