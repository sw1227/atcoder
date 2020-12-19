#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int INF = 999999999;

int main() {
    // temporary
    int Nt, Mt;
    cin >> Nt >> Mt;
    // A, Bを入れ替えても同じなので、長い方をAとする
    // N >= Mとする
    int N = max(Nt, Mt);
    int M = min(Nt, Mt);
    vector<int> A(N);
    vector<int> B(M);

    if (Nt >= Mt) {
        for (int i = 0; i < N; i++) cin >> A[i];
        for (int i = 0; i < M; i++) cin >> B[i];
    } else {
        for (int i = 0; i < M; i++) cin >> B[i];
        for (int i = 0; i < N; i++) cin >> A[i];
    }

    // できるだけ少ない量を取り除きつつ、長さが等しくなった取り除き後の数列を並べた時に等しくない要素も少なくする
    // いくつ取り除けばいいのか？ 長さが揃った以降は2つずつ除かないといけないので、2以上の揃い方がないと意味がない
    // → でもあり得るか 19234 vs 1234567
    // DP? 部分問題を、Aのn番目, Bのm番目としてdp[n][m] 要素数は10^6
    // 対角成分から埋めていけそうだけど、なんか違う 間が抜かれる場合をどう考慮するか
    vector<vector<int>> dp(N + 1, vector<int>(M + 1, INF));
    dp[0][0] = 0;
}