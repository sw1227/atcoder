#include <iostream>
#include <vector>
// #include <algorithm>

using namespace std;

int main() {
    string S;
    cin >> S;

    // BW -> WB
    // WBBWBW WBWBBW WWBBBW
    // B, Wの数は不変 停止するのはW..W B..Bに分離できたときで、一度に1しかずれない
    // 各Wの移動量をカウントする
    vector<int> W_pos;
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == 'W') {
            W_pos.push_back(i);
        }
    }

    long long res = 0; // ここで詰まった。intじゃダメ
    for (int i = 0; i < W_pos.size(); i++) {
        res += W_pos[i] - i;
    }
    cout << res << endl;
}