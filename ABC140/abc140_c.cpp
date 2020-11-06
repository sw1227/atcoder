#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;
    int B[N-1];
    for (int i = 0; i < N-1; i++) cin >> B[i];

    // B[i] >= A[i], B[i] >= A[i+1]
    // i.e. A[i] <= B[i] and A[i] <= B[i-1] (if i=0, A[i] <= B[0])
    int res = B[0]; // Max of A[0]
    for (int i = 1; i < N-1; i++) {
        res += min(B[i], B[i-1]); // max of A[i]
    }
    res += B[N-2];
    cout << res << endl;
}