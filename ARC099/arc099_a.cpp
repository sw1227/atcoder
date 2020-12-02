#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int idx_1; // 1のindex
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        A[i] = a;
        if (a == 1) {
            idx_1 = i;
        }
    }

    // 等しくなった時は必ず全て1になってるはず
    // Kの幅をフルに使って1で固めていくイメージ
    // 左右に分けて考える 初手で1の左・左右・右のどれにするかという選択肢がある

    // 左右にx残ってる時、1度にK-1だけ減らしていけるので、(x + 1) / (K - 1)でOK
    // ceil(x / (K - 1)) => (x + (K - 1) - 1) / (K - 1)
    // 初手のずらし方がK通りあるのでそれぞれ調べる
    int res = N;
    for (int i = 0; i < K; i++) {
        // 左: idx_1 - K - 1で、はみ出してたらスルーしてOK
        int n_left = max(0, idx_1 - K + 1 + i);
        int count_left = (n_left + K - 2) / (K - 1);
        // 右:N - idx_1 - 1あって、
        int n_right = max(0, N - idx_1 - 1 - i);
        int count_right = (n_right + K - 2) / (K - 1);
        res = min(res, count_left + count_right + 1);
    }

    cout << res << endl;
}