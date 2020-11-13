#include <iostream>
#include <vector>

using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> S(H);
    for (int i = 0; i < H; i++) cin >> S[i];


    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (S[i][j] == '#') {
                cout << "#";
            } else {
                int count = 0;
                for (int x = -1; x <=1; x++) {
                    for (int y = -1; y <=1; y++) {
                        int h = i + y;
                        int w = j + x;
                        if ((h < 0) || (w < 0) || (h >= H) ||(w >= W)) {
                            continue;
                        }
                        // else
                        if (S[h][w] == '#') count++;
                    }
                }
                cout << count;
            }
        }
        cout << endl;
    }
}