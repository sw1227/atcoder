#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, D, X;
    cin >> N;
    cin >> D >> X;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    int res = X;
    for (int i=0; i<N; i++) {
        // 1, A[i] + 1, ...
        int j = 0;
        while (true) {
            if (j * A[i] + 1 > D) break;
            res += 1;
            j++;
        }
    }
    cout << res << endl;
}