#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<double> e(N);
    for (int i = 0; i < N; i++) {
        double p;
        cin >> p;
        e[i] = (p + 1.0) / 2.0;
    }

    // Kの選び方の自由度がある
    // 1 - pだと (p + 1) / 2 が期待値になる
    // Cumulative sumでTLE防ぐ
    vector<double> cum(N);
    double cumsum = 0;
    for (int i = 0; i < N; i++) {
        cumsum += e[i];
        cum[i] = cumsum;
    }
    double res = 0;
    for (int i = 0; i < N - K + 1; i++) {
        double ex;
        if (i == 0) ex = cum[K - 1];
        else ex = cum[i + K - 1] - cum[i - 1];
        if (ex > res) res = ex;
    }

    cout << fixed << setprecision(10) << res << endl;
}