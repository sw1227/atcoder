#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long N;
    cin >> N;

    // できるだけsqrt(N)に近い2つの積にする
    long long res;
    for (int i = ceil(sqrt(N)); i > 0; i--) {
        if (N % i == 0) {
            res = (i - 1) + (N / i - 1);
            break;
        }
    }
    cout << res << endl;
}