#include <iostream>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    // K * (K-1) * (K-1) * ...
    long long res = K;
    for (int i = 1; i < N; i++) {
        res *= (K-1);
    }
    cout << res << endl;
}