#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> L(M), R(M);
    for (int i = 0; i < M; i++) cin >> L[i] >> R[i];

    int l_max = *max_element(L.begin(), L.end());
    int r_min = *min_element(R.begin(), R.end());

    if (l_max > r_min) {
        cout << 0 << endl;
    } else {
        cout << (r_min - l_max) + 1 << endl;
    }
}