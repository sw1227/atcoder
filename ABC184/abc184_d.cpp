#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

double INF = 999999;


// メモして再帰でDP（メモできてるのか？）
double solve(int a, int b, int c, vector<vector<vector<double>>>& dp) {
    if (dp[a][b][c] < INF) return dp[a][b][c];
    double ra = solve(a+1, b, c, dp);
    dp[a+1][b][c] = ra;
    double rb = solve(a, b+1, c, dp);
    dp[a][b+1][c] = rb;
    double rc = solve(a, b, c+1, dp);
    dp[a][b][c+1] = rc;
    double s = (double)(a + b + c);
    return (1.0 * a / s) * (1.0 + ra) + (1.0 * b / s) * (1.0 + rb) + (1.0 * c / s) * (1.0 + rc);
}

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    // 足所は全て99以下で、捜査ごとにランダムに取り出された（確率は枚数依存）奴が+1され、増えていく
    // +1ずつしか増えていかないので、最初にどれかが100に到達するまでの期待値を求めれば良い
    // 部分問題にしてDPとか再帰？ dp[a][b][c]で,

    vector<vector<vector<double>>> dp(101, vector<vector<double>>(101, vector<double>(101)));
    for (int i = 0; i < 101; i++) {
        for (int j = 0; j < 101; j++) {
            for (int k = 0; k < 101; k++) {
                if ((i == 100) || (j == 100) || (k == 100)) dp[i][j][k] = 0.0;
                else dp[i][j][k] = INF;
            }
        }
    }

    cout << fixed << setprecision(8) << solve(A, B, C, dp) << endl;
}