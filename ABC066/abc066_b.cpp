#include <iostream>

using namespace std;

int main() {
    string S;
    cin >> S;

    // Sは偶文字列なので偶数. 2ずつ引いていけば良い
    // N = S.length()として Nは偶数で
    // 0, ..., N/2-1, N/2, .., N-1から
    int N = S.length();
    int res = 0;
    for (int i = 1; i < N/2; i++) {
        bool is_even = true;
        // delete 2 * i
        for (int j = 0; j < N/2 - i; j++) {
            if (S[j] != S[N/2 - i + j]) {
                is_even = false;
                break;
            }
        }
        if (is_even) {
            res = N - 2 * i;
            break;
        }
    }

    cout << res << endl;
}