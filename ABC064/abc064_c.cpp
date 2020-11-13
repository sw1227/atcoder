#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) cin >> a[i];

    // 3199以下は決まるので、それ以外が被せにいけば最小, バラバラなら最大
    // ただし全員が3200以上の場合に注意
    vector<int> count(8, 0);
    int min_rate = *min_element(a.begin(), a.end());
    int n_strong = 0;
    for (int i = 0; i < N; i++) {
        // a[i]
        if (a[i] >= 3200) {
            n_strong++;
        } else {
            count[a[i]/400]++;
        }
    }

    if (min_rate >= 3200) {
        // All strong
        cout << 1 << " " << N << endl;
    } else if (n_strong == 0) {
        // No strong
        int res = 0;
        for (int i = 0; i < 8; i++) {
            if (count[i] > 0) res++;
        }
        cout << res << " " << res << endl;
    } else {
        // Mixed
        int res = 0;
        for (int i = 0; i < 8; i++) {
            if (count[i] > 0) res++;
        }
        cout << res << " " << res + n_strong << endl;
    }
}