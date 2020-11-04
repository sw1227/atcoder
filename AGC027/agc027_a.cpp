#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, x;
    cin >> N >> x;
    vector<int> a(N);
    for (int i = 0; i < N; i++) cin >> a[i];

    sort(a.begin(), a.end());
    int res = 0;
    for (int i = 0; i < N; i++) {
        if (x < a[i]) break;

        if (i == N-1) {
            if (x == a[i]) res++;
        } else {
            // give a[i]
            x -= a[i];
            res++;
        }
    }
    cout << res << endl;
}