#include <iostream>
#include <vector>

using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> s(H);
    for (int i = 0; i < H; i++) cin >> s[i];

    // 全ての#について、少なくとも上下左右のいずれかに隣接する#があれば良い
    bool res = true;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (s[i][j] == '.') continue;
            // else: #. check 4 neighbor
            bool ok = false;
            if ((i > 0) && (s[i-1][j] == '#')) ok = true;
            if ((i+1 < H) && (s[i+1][j] == '#')) ok = true;
            if ((j > 0) && (s[i][j-1] == '#')) ok = true;
            if ((j+1 < W) && (s[i][j+1] == '#')) ok = true;
            if (!ok) {
                res = false;
                break;
            }
        }
    }
    if (res) cout << "Yes" << endl;
    else cout << "No" << endl;
}