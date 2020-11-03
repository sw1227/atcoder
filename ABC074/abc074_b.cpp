#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N, K;
    cin >> N;
    cin >> K;
    int x[N];
    for (int i=0; i<N; i++) cin >> x[i];

    // i-th Robot x 2, i-th ball at (xi, i) (i=1, ..., N)
    // type A: (0, i)
    // type B: (K, i)

    int total = 0;
    for (int i=0; i<N; i++) {
        int dA = 2 * abs(x[i]);
        int dB = 2 * abs(x[i] - K);
        total += min(dA, dB);
    }
    cout << total << endl;
}