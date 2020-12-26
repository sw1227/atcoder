#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// // メモ火曜の2D vecotorを参照わたし？
// int dp(int N, int M, vector<int>& X) {
//     if (N >= M) return 0;
//     if (M == 0) return 0;
//     // Else: N < M, M > 0
//     // M番目 X[M-1] に初手で置いていた場合: p1と同じ移動でOK
//     int p1 = dp(N-1, M-1, X);
//     // M番目 X[M-1] に初手で置いていなかった場合: p2の移動に加え、
//     int p2 = dp(N, M-1, X);

// }

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> X(M);
    for (int i = 0; i < M; i++) cin >> X[i];

    if (N >= M) {
        cout << 0 << endl;
    } else { // N < M
        // 最初はN個に別々に重ねる（そうしないメリットがないはず）
        // その方法自体も色々ある
        // 残りのM-NをNからおとづれる最短 M-Nも自由に選べる
        // 部分問題とすると？
        // X_iを埋めた場合と埋めなかった場合のmin
        // (N-1, M-1), (N, M-1)
        // Xの扱い？ 単に端から順に除いていけばいいのか Mの数値依存
        // edge: N >= M, M=0?
        // cout << dp(N, M, X) << endl;

        // 違う 間隔を見ていって、大きい順に切っていってN個のクラスタに分けるイメージ
        // まずはソートしてM-1個の間隔を計算する。そこから上位N-1個を切り捨てるとN個のクラスタに分けられる
        // N < MなのでN-1 < M-1
        // 残った間隔をsweapする　結果は合計すればいい (M-1) - (N-1) = M - N > 0が残る
        sort(X.begin(), X.end());

        vector<int> diff(M-1);
        for (int i = 0; i < M-1; i++) {
            diff[i] = X[i+1] - X[i];
        }
        sort(diff.begin(), diff.end());

        int res = 0;
        for (int i = 0; i < M - N; i++) {
            res += diff[i];
        }
        cout << res << endl;
    }
}