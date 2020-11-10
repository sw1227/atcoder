#include <iostream>

using namespace std;

int main() {
    string S;
    cin >> S;
    long long K;
    cin >> K;

    // 5 * 10^15
    // 2 -> 22 -> 2222 -> ...: n日後には2が2^nになる 5000兆日後には2^500兆なので無限になる
    // 2以上の最初の数とindex
    int first_n;
    long long first_i = 101; // Large enough
    for (int i = 0; i < S.length(); i++) {
        if (S[i] - '0' > 1) {
            first_n = S[i] - '0';
            first_i = (long long)i;
            break;
        }
    }

    if (first_i == 101) { // all 1
        cout << 1 << endl;
    } else {
        if ((long long)first_i >= K) cout << 1 << endl;
        else cout << first_n << endl;
    }
}