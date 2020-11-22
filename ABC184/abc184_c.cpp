#include <iostream>
#include <cmath>

using namespace std;

int solve(int r1, int r2, int c1, int c2) {
    // 同一なら0
    if ((r1 == r2) && (c1 == c2)) return 0;

    // 範囲内なら1
    if (r1 + c1 == r2 + c2) return 1;
    if (r1 - c1 == r2 - c2) return 1;
    if (abs(r1 - r2) + abs(c1 - c2) <= 3) return 1;

    // else: 2 or 3
    // 偶奇性で斜めx2でいける場合は2
    if ((abs(r1 - r2) + abs(c1 - c2)) % 2 == 0) return 2;
    // 最初に近くに移動して次に斜めでいける場合は2
    int x = r2 - r1;
    int y = c2 - c1;
    if (abs(x + y) <= 3) return 2;
    if (abs(x - y) <= 3) return 2;
    // その他
    return 3;
}

int main() {
    int r1, r2, c1, c2;
    cin >> r1 >> c1;
    cin >> r2 >> c2;

    // maxでも3ぐらいあれば行けそう
    // d1, d1 => d2, -d2 => d1+d2, d1-d2 d1=d2なら2d1, 0
    // 斜め座標で考える

    int res = solve(r1, r2, c1, c2);
    cout << res << endl;
}