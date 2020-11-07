#include <iostream>
#include <vector>

using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> C(H);
    for (int i = 0; i < H; i++) {
        cin >> C[i];
    }

    for (int i = 0; i < H; i++) {
        cout << C[i] << endl;
        cout << C[i] << endl;
    }
}