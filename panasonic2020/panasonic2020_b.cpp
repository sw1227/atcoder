#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // 2**32 ~= 10**(32 * 0.3010)
    // 10^9 * 10^9 > 2**32
    long H, W;
    cin >> H >> W;

    long long res;
    // parity!
    // => if H == 1 or W == 1, only 1!!!!
    if ((H == 1) || (W == 1)) {
        res = 1;
    } else {
        if ((H % 2 == 0) || (W % 2 == 0)) res = H * W / 2;
        if ((H % 2 == 1) && (W % 2 == 1)) res = ceil(H * W / 2.0);
    }
    cout << res << endl;
}