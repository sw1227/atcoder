#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int A, B, C, X, Y;
    cin >> A >> B >> C >> X >> Y;

    // n_a + n_c/2 >= X
    // n_b + n_c/2 >= Y
    // minimize A*n_a + B*n_b + C*n_c
    int maxXY = max(X, Y);
    int res = X * A + Y * B;
    for (int i = 0; i <= 2 * maxXY; i+=2) {
        // n_c : i, n_a: X - i/2, n_b: Y - i/2
        int n_a = max(X - i/2, 0);
        int n_b = max(Y - i/2, 0);
        int p = C * i + A * n_a + B * n_b;
        if (p < res) res = p;
    }
    cout << res << endl;
}