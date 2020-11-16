#include <iostream>

using namespace std;

int main() {
    string S;
    cin >> S;

    // Brute force
    bool res = false;
    for (int i = 0; i < S.length() + 1; i++) {
        for (int l = 0; l < S.length() + 1 - i; l++) {
            string s = S;
            s.erase(i, l);
            if (s == "keyence") res = true;
        }
    }
    if (res) cout << "YES" << endl;
    else cout << "NO" << endl;
}