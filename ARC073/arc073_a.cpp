#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, T;
    cin >> N >> T;
    vector<int> t(N);
    for (int i = 0; i < N; i++) cin >> t[i];

    int res = 0;
    for (int i = 1; i < N; i++) {
        // Add seconds between i-1 to i
        int stop_time = t[i-1] + T;
        if (stop_time <= t[i]) {
            res += T;
        } else {
            res += t[i] - t[i-1];
        }
    }
    // add T: from t[N-1]
    cout << res + T << endl;
}