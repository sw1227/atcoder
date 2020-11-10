#include <iostream>

using namespace std;

int main() {
    long long X, Y;
    cin >> X >> Y;

    int res = 1;
    long long x = X;
    while (2 * x <= Y) {
        res++;
        x *= 2;
    }
    cout << res << endl;
}