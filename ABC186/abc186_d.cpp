#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];
    long long res = 0;

    // 結局 NC2 なので組み合わせで、順番は関係ない
    sort(A.begin(), A.end(), greater<int>()); // descending
    for (int i = 1; i < N; i++) {
        long long diff = A[i-1] - A[i];
        // N-i個、多重度がi
        res += diff * (N - i) * i;
    }
    cout << res << endl;
}