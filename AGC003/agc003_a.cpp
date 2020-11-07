#include <iostream>

using namespace std;

int main() {
    string S;
    cin >> S;

    int n, w, s, e;
    n = w = s = e = 0;
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == 'N') n++;
        if (S[i] == 'W') w++;
        if (S[i] == 'S') s++;
        if (S[i] == 'E') e++;
    }
    bool ok = true;
    // n / w
    if (((n > 0) && (s == 0)) || ((n == 0) && (s > 0))) ok = false;
    if (((w > 0) && (e == 0)) || ((w == 0) && (e > 0))) ok = false;
    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;
}