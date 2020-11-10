#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) cin >> a[i];

    int res = 0;
    for (int i = 0; i < N; i++) {
        int x = a[i];
        while (x % 2 == 0) {
            x /= 2;
            res++;
        }
    }
    cout << res << endl;
}