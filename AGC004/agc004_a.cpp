#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long A, B, C;
    cin >> A >> B >> C;

    // 0, 0, 0を赤色として一般性を失わない
    // 0, 0, 0から直方体状に赤が続いているので、xy, yz, zx平面のいずれかに並行な面で分離できる
    // 差が最小になるのはそのいずれか。偶数があればぴったり割れる。全部奇数なら一番小さい面で切った時にその面積となる
    if ((A % 2 == 0) || (B % 2 == 0) || (C % 2 == 0)) {
        cout << 0 << endl;
    } else {
        // All odd
        cout << min({A * B, B * C, C * A}) << endl;
    }
}