#include <iostream>

using namespace std;

// long longじゃないとWAになる！
long long solve(long long N, long long A, long long B) {
    if (N == 1) {
        if (A == B) return 1;
        else return 0;
    }
    // else: N >= 2
    if (A > B) return 0;
    // else: N >= 2 and A <= B
    return (long long)((N - 2) * (B - A) + 1);
}

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    // A, Bは必ず持っていて、残りがA〜Bの範囲内で全てあり得る 和の数が問題
    // 具体的な和のバリエーションよりとりうる数を数えれば良い
    // 基本的に, A, B以外の最小と最大の差 + 1なので(N-2) * (B - A) + 1
    long long res = solve(N, A, B);
    cout << res << endl;
}