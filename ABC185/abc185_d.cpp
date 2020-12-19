#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    // A[i]は1から始まりNまであることに注意
    vector<int> A(M);
    for (int i = 0; i < M; i++) cin >> A[i];

    // ハンコの幅kは、連続する最大の白色にすればいい
    // Aはソートされてない
    // 白色セグメントごとの回数は、セグメント長さをkで割って切り上げたものになる

    if (M == 0) {
        cout << 1 << endl;
    } else if (M == N) {
        cout << 0 << endl;
    } else { // M > 0
        sort(A.begin(), A.end()); // ascending
        vector<int> whites = {};

        for (int i = 0; i < M; i++) {
            if (i == 0) {
                // 左端
                if (A[i] > 1) whites.push_back(A[i] - 1);
            } else {
                // 0 < i < M
                int dist = A[i] - A[i-1] - 1;
                if (dist > 0) whites.push_back(dist);
                // 右端
                if (i == M-1) {
                    if (A[i] < N) whites.push_back(N - A[i]);
                }
            }
        }

        int k = *min_element(whites.begin(), whites.end());

        // cout << "k = " << k << endl;
        int res = 0;
        for (int len : whites) {
            // cout << "len " << len << endl;
            res += (len + k - 1) / k;
        }
        cout << res << endl;
    }
}