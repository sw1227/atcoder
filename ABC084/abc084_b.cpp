#include <iostream>

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    string S;
    cin >> S;

    bool ok = true;
    for (int i = 0; i < A; i++) {
        if (!isdigit(S[i])) {
            ok = false;
            break;
        }
    }
    if (S[A] != '-') ok = false;
    for (int i=A+1; i<A+B+1; i++) {
        if (!isdigit(S[i])) {
            ok = false;
            break;
        }
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;
}