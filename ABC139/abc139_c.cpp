#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> H(N);
    for (int i = 0; i < N; i++) cin >> H[i];

    int res = 0;
    int count = 0;
    for (int i = 0; i < N-1; i++) {
        if (H[i+1] <= H[i]) {
            count++;
            if (count > res) res = count;
        } else {
            count = 0;
        }
    }
    cout << res << endl;
}