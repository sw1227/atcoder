#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    // vector<int> A(N);
    // vector<int> B(N);
    vector<pair<int, int>> v(N);
    // for (int i = 0; i < N; i++) cin >> A[i] >> B[i];
    for (int i = 0; i < N; i++) {
        int A, B;
        cin >> A >> B;
        v[i] = make_pair(A, B); // price, number
    }
    // Sort by price
    sort(v.begin(), v.end());

    // Greedy!
    long long res = 0;
    // M: TO BUY at each step
    for (int i = 0; i < N; i++) {
        if (M <= v[i].second) {
            // Buy M, price is V[i].first
            res += (long long)M * (long long)v[i].first;
            break;
        } else {
            // Buy v[i].second
            res += (long long)v[i].second * (long long)v[i].first;
            M -= v[i].second;
        }
    }
    cout << res << endl;
}