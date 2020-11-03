#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;

    // floor(X * 1.08) = N
    // N <= X * 1.08 < N+1
    // N / 1.08 <= X < (N+1) / 1.08
    int ans = ceil(N / 1.08);
    if (ans >= (N + 1) / 1.08) {
        cout << ":(" << endl;
    } else {
        cout << ans << endl;
    }
}