#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(3*N);
    for (int i = 0; i < 3*N; i++) cin >> a[i];

    // 最小のN個を配分し、残りの2Nの中で小さい方のNを最大化する
    // 2Nの中から大きい順に同じチームにしていく
    sort(a.begin(), a.end(), greater<int>());

    long long res = 0;
    for (int i = 1; i < 2 * N; i+=2) {
        res += a[i];
    }
    cout << res << endl;
}