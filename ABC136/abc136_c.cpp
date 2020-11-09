#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> H(N);
    for (int i = 0; i < N; i++) cin >> H[i];

    int h = H[N-1];
    int ok = true;
    if (N > 1) {
        for (int i = N-2; i >= 0; i--) {
            if (H[i] - h > 1) {
                ok = false;
                break;
            } else if (H[i] - h == 1) {
                // -1
                h = H[i] - 1;
            } else {
                h = H[i];
            }
        }
    }
    cout << (ok ? "Yes" : "No") << endl;
}