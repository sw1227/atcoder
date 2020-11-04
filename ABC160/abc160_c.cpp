#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int K, N;
    cin >> K >> N;
    int A[N];
    for (int i=0; i<N; i++) cin >> A[i];

    // start, direction
    vector<int> dist(N); // dist[i]: distance between A[i] and A[i+1] (A[N] -> A[0])
    for (int i=0; i<N; i++) {
        if (i == N-1) {
            dist[i] = K - A[i] + A[0];
        } else {
            dist[i] = A[i+1] - A[i];
        }
    }

    sort(dist.begin(), dist.end(), greater<int>());

    int res = 0;
    for (int i=1; i<N; i++) res += dist[i];
    cout << res << endl;
}