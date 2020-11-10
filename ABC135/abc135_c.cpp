#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N+1);
    vector<int> B(N);
    for (int i = 0; i < N + 1; i++) cin >> A[i];
    for (int i = 0; i < N; i++) cin >> B[i];

    long long res = 0;
    int rest = 0;
    for (int i = 0; i < N + 1; i++) {
        if (A[i] >= B[i] + rest) {
            // Not all monster
            res += B[i] + rest;
            rest = 0;
        } else {
            // all monster
            res += A[i];
            rest = min(rest + B[i] - A[i], B[i]);
        }
    }
    cout << res << endl;
}