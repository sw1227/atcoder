#include <iostream>

using namespace std;

int main() {
    long long A, B, C, K;
    cin >> A >> B >> C >> K;

    // after k, (-1)^K * (A - B)
    long long ans = A - B;
    if (K % 2 == 1) ans *= (-1);
    cout << ans << endl;
}