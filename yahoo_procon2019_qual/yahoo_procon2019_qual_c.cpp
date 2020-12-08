#include <iostream>

using namespace std;

long long max_num(int K, int A, int B) {
    // A -> 1 > B で B-Aだけ増える (2step)
    if (B - A <= 2) { // +1ずつしていくのがbest
        return 1 + K;
    }
    // else: A + 2 < B (B - A > 2)
    // 先頭から順にたどると、A枚より小さい間は+1していくしかなくて、A枚に到達した時点でBに2stepで変換するのが良い ただしK-1回目は手遅れ
    long long n_b = 1;
    for (int i = 0; i < K; i++) {
        if (i == K - 1) {
            // last step:ビスケットを増やすしかない
            n_b++;
        } else {
            if (A > n_b) {
                n_b++;
            } else {
                // 2stepかけてB - Aだけ増やす
                n_b += B - A;
                i++;
            }
        }
    }
    return n_b;
}

int main() {
    int K, A, B;
    cin >> K >> A >> B;

    // +1またはA -> 1または1 -> B
    cout << max_num(K, A, B) << endl;
}