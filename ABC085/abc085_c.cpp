#include <iostream>

using namespace std;

int main() {
    int N, Y;
    cin >> N >> Y;

    bool ok = false;

    for (int i=0; i<=N; i++) {
        if (ok) break;
        for (int j=0; j<=N-i; j++) {
            // Use 10000 * i, 5000 * j
            int k = N - i - j;
            if (10000 * i + 5000 * j + 1000 * k == Y) {
                cout << i << " " << j << " " << k << endl;
                ok = true;
                break;
            }
        }
    }
    if (!ok) cout << "-1 -1 -1" << endl;
}