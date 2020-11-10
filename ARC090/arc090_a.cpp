#include <iostream>
#include <vector>

using namespace std;

// ---------------------------
// ARC090-a == ABC087-C
// ---------------------------

int main() {
    int N;
    cin >> N;
    vector<vector<int>> A(2, vector<int>(N));
    for (int i = 0; i < N; i++) cin >> A[0][i];
    for (int i = 0; i < N; i++) cin >> A[1][i];

    int res = 0;
    for (int i = 0; i < N; i++) {
        int sum = 0;
        for (int j=0; j<=i; j++) sum += A[0][j];
        for (int j=i; j<N; j++) sum += A[1][j];
        if (sum > res) res = sum;
    }
    cout << res << endl;
}