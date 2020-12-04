#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

// gcd: O(log max(a, b))
int gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}


int main() {
    int N, X;
    cin >> N >> X;
    vector<int> x(N);
    for (int i = 0; i < N; i++) cin >> x[i];

    // D=1なら自由に動ける D>1ならパリティ的なあれが出てくる
    // XをDで割ったあまりが全てのxiで等しければ良い

    // 全てのxについて、Dはabs(X - x) の約数でなければならない
    vector<int> dists = {};
    for (int i = 0; i < N; i++) {
        int dist = abs(X - x[i]);
        dists.push_back(dist);
    }

    // distsの最大公約数が知りたい
    int res = dists[0];
    for (int i = 1; i < N; i++) {
        res = gcd(res, dists[i]);
    }

    cout << res << endl;

    // // TLE!!!!!
    // // Dの上限は間隔の最大値
    // int max_diff = 0;
    // for (int i = 0; i < N - 1; i++) {
    //     if (max_diff < x[i+1] - x[i]) {
    //         max_diff = x[i+1] - x[i];
    //     }
    // }

    // int D;
    // for (D = max_diff; D >= 1; D--) {
    //     int m = X % D;
    //     bool ok = true;
    //     for (int i = 0; i < N; i++) {
    //         ok = ok && (x[i] % D == m);
    //         if (!ok) break;
    //     }
    //     if (ok) break;
    // }

    // if (N == 1) {
    //     cout << abs(N - x[0]) << endl;
    // } else {
    //     cout << D << endl;
    // }
}