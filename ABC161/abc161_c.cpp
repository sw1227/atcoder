#include <iostream>
#include <cmath>

using namespace std;

// 2 WA
long long get_min(long long x, long long K) {
    if (2 * x < K) return x;
    if (x <= K) return K - x;

    // x >= K
    int m = x % K;
    while (true) {
        int n = abs(m - K);
        if (n < m) {
            m = n;
        } else {
            break;
        }
    }
    return m;
}

// AC!
long long get_min2(long long x, long long K) {
    if (2 * x <= K) return x;
    if (x <= K) return K - x;

    long long m = x % K; // これがないと1WAになった
    if (2 * m <= K) return m;
    return K - m;
}

// AC, simpler
long long get_min3(long long x, long long K) {
    long long m = x % K;
    return min(m, abs(K-m));
}


int main() {
    long long N, K;
    cin >> N >> K;

    cout << get_min2(N, K) << endl;
}