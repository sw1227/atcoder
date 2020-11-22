#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    // サイコロでxとすると, x >= Kなら勝ち（x = K, K+1, ..., N）: (N-K+1)/N
    // x = 1, 2, ..., K-1だったらコインを繰り返す
    // コインで勝つにはK以上になるまで連勝が必要 (1/2)^nで、nはx * 2^nがK以上になる最小の整数
    double res = 0.0; // 明示的に初期化しないとAtCoder(Clang10.0)ではnanになる
    double immediate_win = 1.0 * max(0, N - K + 1) / N;
    res += immediate_win;
    for (int i = 1; i <= min(N, K-1); i++) {
        int n = 0;
        while (i * pow(2, n) < K) n++;
        res += 1.0 / N / pow(2, n);
    }
    cout << fixed << setprecision(11) << res << endl;
}