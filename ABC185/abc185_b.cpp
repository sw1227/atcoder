#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int N, M, T;
    cin >> N >> M >> T;
    vector<int> A(M);
    vector<int> B(M);
    for (int i = 0; i < M; i++) {
        cin >> A[i] >> B[i];
    }

    // t = 0, 残りN
    // t = 0.5 残りN-1
    // 単純に引き算で良さそう
    int t = 0;
    int rest = N;
    int ok = true;
    for (int i = 0; i < M; i++) {
        // arrive
        rest -= A[i] - t;
        if (rest <= 0) {
            ok = false;
            break;
        }
        // charge
        rest = min(rest + B[i] - A[i], N);
        t = B[i];
    }
    // ここまでは最後のカフェ滞在
    if (ok) {
        if (rest <= T - t) ok = false;
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;
}