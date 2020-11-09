#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long N, A, B;
    cin >> N >> A >> B;

    // 両端以外ではeven, oddを順番にいくことになる
    long long res;
    if ((B - A) % 2 == 0) {
        // 互いに近づく
        res = (B - A) / 2;
    } else {
        // 端に遠い方はひたすら近づき、端に近い方は偶奇を1回調整してから近く
        // e.g. N = 10
        // (2, 7) -> (1, 6) -> (1, 5) -> (2, 4) -> (3, 3)
        // (4, 9) -> (5, 10) -> (6, 10) -> (7, 9) -> (8, 8)
        if (A - 1 <= N - B) {
            res = (A + B - 1) / 2; // (A - 1) + 1 + (B - 1)
        } else {
            res = (2 * N - A - B + 1) / 2; // (N - B) + 1 + (N - A)
        }
    }
    cout << res << endl;
}