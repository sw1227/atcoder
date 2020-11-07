#include <iostream>

using namespace std;

int main() {
    string S, T;
    cin >> S;
    cin >> T;

    int ok = false;
    for (int i = 0; i < S.length(); i++) {
        string slided = S.substr(S.length() - i, i) + S.substr(0, S.length() - i);
        if (slided == T) {
            ok = true;
            break;
        }
    }
    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;
}