#include <iostream>
#include <cmath>

using namespace std;

int INF = 9999999;

// int get_item(int ***dp, int i, int j, int k) {
//     if ((i < 0) || (j < 0) || (k < 0) || (i >= 50) || (j >= 50) || (k >= 50)) {
//         return INF;
//     } else {
//         return dp[i][j][k];
//     }
// }

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    // 操作ごとに合計は2増えるので、仮にD, D, Dに落ち着くとしたら、3D-(A+B+C)の半分が回数になる
    // A+B+Cから2ずつ増えていって3の倍数になり、かつD >= max(A, B, C)となれば良さそう。
    // その場合必ず実現できるのか？ できるっぽい
    int sum = A + B + C;
    int greatest = max({A, B, C});
    int res = 0;
    while (true) {
        if ((sum % 3 == 0) && (sum >= 3 * greatest)) {
            break;
        }
        res++;
        sum += 2;
    }

    cout << res << endl;
    // dp[a][b][c] = min(dp[a-2][b][c], dp[a][b-2][c], dp[a][b][c-2], dp[a][b-1][c-1], ...)
    // int dp[50][50][50];
    // dp[0][0][0] = 0;
    // [0][1][0]
    // for (int i = 0; i < 50; i++) {
    //     for (int j = 0; j < 50; j++) {
    //         for (int k = 0; k < 50; k++) {
    //             dp[i][j]
    //         }
    //     }
    // }
}