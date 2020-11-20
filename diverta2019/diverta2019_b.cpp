#include <iostream>

using namespace std;

int main() {
    int R, G, B, N;
    cin >> R >> G >> B >> N;

    // r * R + g * G + b * B = N
    // r, gを探索すると9 * 10^6なのでいける　あとは残りがBの倍数ならOK
    int res = 0;
    for (int r = 0; r * R <= N; r++) {
        for (int g = 0; g * G <= N - r * R ; g++) {
            int rest = N - r * R - g * G; // >= 0
            if (rest % B == 0) {
                res++;
            }
        }
    }
    cout << res << endl;
}