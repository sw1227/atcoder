#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> s(M);
    vector<int> c(M);
    for (int i = 0; i < M; i++) cin >> s[i] >> c[i];

    // ちょうどN桁で左からs桁目がc: 10^(N - s)で割るとc
    // N桁: 10^(N-1) ..., (10^N)-1
    int res = -1;
    // 0だけ別扱いが必要
    int start;
    if (N == 1) {
        start = 0;
    } else {
        start = (int)pow(10, N-1);
    }
    for (int i = start; i < (int)pow(10, N); i++) {
        string n = to_string(i);
        bool ok = true;
        for (int j = 0; j < M; j++) {
            if (n[s[j]-1] - '0' != c[j]) {
                ok = false;
                break;
            }
        }
        if (ok) {
            res = i;
            break;
        }
    }
    cout << res << endl;
}