#include <iostream>

using namespace std;


long long combination(int n, int r) {
    if (r == 0) return 1;
    if (2 * r > n) return combination(n, n - r);

    long long res = 1;

    for (int k = 1; k <= r; ++k) {
        res *= n - k + 1;
        res /= k;
    }

    return res;
}

int main() {
    int L;
    cin >> L;

    // 答えは2^63未満　ざっくり10^18ぐらい long long OK
    // 最低でも1ずつ配分になるので、残りのL-12の分け方
    // 12だと1, 13だと1なので12, 14だと12 + 12C2 = 12 + 66 = 78
    // 15だと3 = 3 = 2+1 = 1+1+1なので12 + 12P2 + 12C3 = 12 + 12*11 + 12*11*10/6 = 144 + 220 = 364
    // 16だと4 = 4 = 3+1 = 2+2 = 2+1+1 = 1+1+1+1なので12 + 12P2 + 12C2 + 

    // 11の仕切りを間に入れると考える？
    // L=13の時、12箇所に11この仕切りなので12C11 = 12
    // L=14の時、13箇所に11なので13C11 = 13C2 = 13 * 12 / 2 = 78
    // L=15: 14C11 = 14C3 = 14*13*12/6 = 28*13 = 364
    // 一般に, (L-1)C11 = (L-1)C(L-12)

    long long res = combination(L - 1, 11);
    cout << res << endl;
}