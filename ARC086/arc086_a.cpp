#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    // 個数が少ない奴らを書き換えていく。ソートしたい。
    vector<pair<int, int>> count(N); // (count, num)
    for (int i = 0; i < N; i++) count[i] = make_pair(0, i);
    for (int i = 0; i < N; i++) {
        count[A[i] - 1] = make_pair(count[A[i] - 1].first + 1, count[A[i] - 1].second);
    }
    sort(count.begin(), count.end());

    int res = 0;
    int pos = 0;
    int deleted = 0;
    while (count[pos].first == 0) pos++;

    // unique: N - pos
    int unique = N - pos;
    while (unique - deleted > K) {
        deleted++;
        res += count[pos].first;
        pos++;
    }
    cout << res << endl;
}