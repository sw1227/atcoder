#include <iostream>
#include <vector>
using namespace std;

// S + K * x がNの倍数であるような最小のx（あれば）
// S + Kx = nN
// => nN - S = Kx =>  nN-SがKの倍数となる最小のnが知りたい
// nがわかればx = (nN - S) / Kでもとまる
// (nN-S) % K の変遷が知りたい K上で単調に動く
// それが小問題になってて、Kの範囲でN % Kずつ動いていった時に, (N-S) % Kからどれだけずれていくか
// つまり、solve(K, (N-S) % K, (N % K))となる
// KとNの大小関係はわからないが, K = K % Nとして良いので必ず小さくなる
// (10000, 6, 14) => (14, 12, 4) => (4, 2, 2) => (2, 0, 0)
// 小問題がわかったら？ それがnと1の差で,nが分かる


// (N - S) % Kが0ならOK, そうでなければ? 1, 2, ... K-1の可能性がある
// N-Sは+だがKとの大小は保証されない
// -1の条件は最初にダメ(N-S%K != 0)でかつ一周して元に戻ってくること(N % )と考えて良い？
// 戻らないとすると
int solve(int N, int S, int K) {
    // cout << "solving " << N << ", " << S << ", " << K << endl;
    K = K % N;
    if (K == 0) return -1;
    if ((N - S) % K == 0) return (N - S) / K;

    // -1: 一周して元に戻ってくる N % K = 0
    if ((N % K) == 0) {
        return -1;
    }

    int n = solve(K, (N-S) % K, N % K) + 1;
    if (n == 0) return -1; // sub problemが-1
    return ((long long)n * N - S) / K;
}

int main() {
    int T;
    cin >> T;

    vector<int> results(T, -1);
    int N, S, K;
    for (int i = 0; i < T; i++) {
        cin >> N >> S >> K;
        results[i] = solve(N, S, K);
    }

    for (int i = 0; i < T; i++) {
        cout << results[i] << endl;
    }
}