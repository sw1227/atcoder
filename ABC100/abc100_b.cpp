#include <iostream>
// #include <cmath>

using namespace std;

int main() {
    int D, N;
    cin >> D >> N;

    int p;
    if (D == 2) p = 100*100;
    if (D == 1) p = 100;
    if (D == 0) p = 1;

    int res = N * p;
    // より上位の累乗で割り切れてしまう場合
    if (N == 100) res += p;
    cout << res << endl;
}