#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) cin >> a[i];

    int res = 0;
    int n = 1;
    for (int i = 0; i < N; i++) {
        if (a[i] != n) {
            // break!
            res++;
        } else {
            n++;
        }
    }
    if (res == N) cout << -1 << endl;
    else cout << res << endl;
}