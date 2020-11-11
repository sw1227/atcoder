#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    long long l, h, h2;
    l = h = h2 = 0;
    for (int i = 0; i < N; i++) l += A[i];
    // 右を長めにするか左を長めにするかの選択肢がある
    for (int i = 0; i < N; i++) {
        h += A[i];
        if (h >= l / 2) break;
    }
    for (int i = N-1; i >= 0; i--) {
        h2 += A[i];
        if (h2 >= l / 2) break;
    }
    cout << min(abs(h - (l - h)), abs(h2 - (l - h2))) << endl;
}