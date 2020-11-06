#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

float temperature(int x, int T) {
    return T - 0.006 * x;
}

int main() {
    int N, T, A;
    cin >> N;
    cin >> T >> A;
    vector<int> H(N);
    for (int i = 0; i < N; i++) cin >> H[i];

    float min_diff = 999999;
    int res;
    for (int i = 0; i < N; i++) {
        float t = temperature(H[i], T);
        float diff = abs(t - A);
        if (diff < min_diff) {
            min_diff = diff;
            res = i;
        }
    }
    cout << res + 1 << endl;
}