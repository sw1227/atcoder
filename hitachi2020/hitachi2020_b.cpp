#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int A, B, M;
    cin >> A >> B >> M;
    vector<int> a(A);
    vector<int> b(B);
    vector<int> x(M);
    vector<int> y(M);
    vector<int> c(M);
    for (int i = 0; i < A; i++) cin >> a[i];
    for (int i = 0; i < B; i++) cin >> b[i];
    for (int i = 0; i < M; i++) cin >> x[i] >> y[i] >> c[i];

    int res = 1000000;
    // 1. search all ticket
    for (int i = 0; i < M; i++) {
        int price = a[x[i] - 1] + b[y[i] - 1] - c[i];
        if (price < res) res = price;
    }

    // 2. without ticket
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if (a[0] + b[0] < res) res = a[0] + b[0];
    cout << res << endl;
}