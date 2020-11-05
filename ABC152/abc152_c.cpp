#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> P(N);
    for (int i = 0; i < N; i++) cin >> P[i];

    int res = 0;
    int curr_min = 2 * N;
    for (int i = 0; i < N; i++) {
        if (P[i] <= curr_min) {
            res++;
            curr_min = P[i];
        }
    }
    cout << res << endl;
}