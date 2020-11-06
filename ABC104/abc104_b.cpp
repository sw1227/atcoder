#include <iostream>

using namespace std;

int main() {
    string S;
    cin >> S;

    bool ok = true;
    if (S[0] != 'A') ok = false;

    int n_c = 0;
    for (int i=2; i<S.length() - 1; i++) {
        if (S[i] == 'C') n_c++;
    }
    if (n_c != 1) ok = false;

    for (int i=1; i<S.length(); i++) {
        if ((S[i] != 'C') && (!islower(S[i]))) ok = false;
    }

    if (ok) cout << "AC" << endl;
    else cout << "WA" << endl;
}