#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    // 累積和とその累積和を考える。
    // cumcumがmaxの行でcumがmaxまでの列を取ればいい。
    // ただし, cumcum maxの行によってcumのレンジが変わることと、cumcum max複数ありうることに注意
    // cout << "cum" << endl;
    vector<long long> cum(N);
    vector<int> cummax(N);
    int m = 0;
    long long c = 0;
    for (int i = 0; i < N; i++) {
        c = c + A[i];
        cum[i] = c;

        if (c > m) {
            m = c;
        }
        cummax[i] = m;
        // cout << " " << m;
    }
    // cout << endl;



    // cout << "cumcum" << endl;
    vector<long long> cumcum(N);
    long long cc = 0;
    for (int i = 0; i < N; i++) {
        cc = cc + cum[i];
        cumcum[i] = cc;
        // cout << " " << cc;
    }
    // cout << endl;

    vector<pair<long long, int>> cumul(N);
    for (int i = 0; i < N; i++) {
        cumul[i] = make_pair(cumcum[i], i);
    }

    // Sort by cumcum
    sort(cumul.begin(), cumul.end(), greater<pair<long long, int>>());
    long long max_cc = cumul[0].first;
    // cout << "max_cc " << max_cc << endl;
    int res = -100000000;
    for (int i = 0; i < N; i++) {
        // if (cumul[i].first < max_cc) break;
        // cout << "i: " << i << ", sec: " << cumul[i].second << endl;
        // この中でcumの最大を求める。cumul[i].second.secondまでのcumのmax
        // int max_cum = -100000000;
        // for (int j = 0; j < cumul[i].second + 1; j++) {
        //     if (cum[j] > max_cum) {
        //         max_cum = cum[j];
        //     }
        // }
        int max_cum = cummax[cumul[i].second];
        // if (max_cum + max_cc > res) res = max_cum + max_cc;
        if (max_cum + cumul[i].first > res) res = max_cum + cumul[i].first;
    }

    // if (res < 0) cout << 0 << endl;
    // else cout << res << endl;
    cout << max(res, 0) << endl;


}