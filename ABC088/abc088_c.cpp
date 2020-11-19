#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> c(3, vector<int>(3));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> c[i][j];
        }
    }
    // a1+b1 a1+b2 a1+b3
    // a2+b1 a2+b2 a2+b3
    // a3+b1 a3+b2 a3+b3

    // a2 - a1 = x => a2 = a1 + x, a3 - a2 = y => a3 = a2 + y = a1 + x + y
    // b2 - b1 = z => b2 = b1 + z, b3 - b2 = w => b3 = b2 + w = b1 + z + w
    // (a1+b1)   (a1+b1)+z   (a1+b1)+z+w
    // (a1+b1)+x (a1+b1)+x+z (a1+b1)+x+w

    // 0       z     z+w
    // x   x + z x + z+w
    // x+y x+y+z x+y+z+w
    // x, zはすぐわかる それを使ってy, wもわかる あとは再構成
    int x = c[1][0] - c[0][0];
    int z = c[0][1] - c[0][0];
    int y = c[2][0] - c[1][0];
    int w = c[0][2] - c[0][1];
    int ab = c[0][0]; // a1 + b1
    int ok = true;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int e = c[i][j];
            e -= ab;
            if (i >= 1) e -= x;
            if (i == 2) e -= y;
            if (j >= 1) e -= z;
            if (j == 2) e -= w;
            if (e != 0) ok = false;
        }
    }
    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;
}