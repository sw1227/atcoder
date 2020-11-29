#include <iostream>
#include <cmath>
using namespace std;


long long solve(int n, int m) {
    // n <= m
    long long count = 0;
    if (n == 1) {
        if (m == 1) return 1;
        if (m == 2) return 0;
        // else: 両端は表, それ以外は裏
        return m - 2;
    }
    if (n == 2) {
        // mによらず全部偶数
        return 0;
    }
    // else: 3 <= n <= m
    // 角は4で表、端は6で表, それ以外は裏
    // long longつけないとWAになる！！！
    return (long long)(n - 2) * (long long)(m - 2);
}

int main() {
    int N, M;
    cin >> N >> M;

    // 各カードは誰によって（自分含め）裏返されるか 偶数回なら表、奇数回なら裏
    // カウントしたら間に合わない
    // n <= mとする
    int n = min(N, M);
    int m = max(N, M);
    long long res = solve(n, m);
    cout << res << endl;
}