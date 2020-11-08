#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> h(N);
    for (int i = 0; i < N; i++) cin >> h[i];

    sort(h.begin(), h.end());
    // (0, ..., K-1), (1, ..., K), ..., (N-K, ..., N-1)
    long long res = h[N-1] - h[0];
    for (int i = 0; i <= N-K; i++) {
        if (res > (h[K-1+i] - h[i])) res = h[K-1+i] - h[i];
    }
    cout << res << endl;
}