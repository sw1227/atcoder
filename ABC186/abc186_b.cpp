#include <iostream>
#include <vector>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<int>> A(H, vector<int>(W));
    for (int h = 0; h < H; h++) {
        for (int w = 0; w < W; w++) cin >> A[h][w];
    }
    int min_a = 999;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (A[i][j] < min_a) {
                min_a = A[i][j];
            }
        }
    }
    int res = 0;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            res += A[i][j] - min_a;
        }
    }
    cout << res << endl;
}