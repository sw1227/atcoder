#include <iostream>
#include <vector>

using namespace std;

/////////////////////
// ARC082_a == ABC072_C
/////////////////////

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) cin >> a[i];

    // a[i]は独立に決められるので、a[i]が対応可能な整数を+1していく
    vector<int> X(100'000 + 2, 0);
    for (int i = 0; i < N; i++) {
        // 0<=a[i]なのでX[0]がX=-1に相当するものとする
        X[a[i]]++;
        X[a[i]+1]++;
        X[a[i]+2]++;
    }
    // count max
    int res = 0;
    for (int i = 0; i < X.size(); i++) {
        if (X[i] > res) res = X[i];
    }
    cout << res << endl;
}