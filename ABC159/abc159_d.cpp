#include <iostream>
#include <vector>
#include <unordered_map>
#include <cmath>

using namespace std;


int factorial(int n) {
    int res = 1;
    for (int i = 0; i < n; i++) {
        res *= (i + 1);
    }
    return res;
}

long long combination(long long n, long long k) {
    if (k > n) return 0;
    long long c = min(k, n - k);
    long long res = 1;
    long long m = n;
    for (long long i = 0; i < c; i++) {
        res *= m;
        m--;
    }
    return res / factorial(c);
}


int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    unordered_map<int, int> count;
    for (int i = 0; i < N; i++) {
        if (count.find(A[i]) == count.end()) {
            count[A[i]] = 1;
        } else {
            count[A[i]]++;
        }
    }

    // 除かなかった場合を計算したらOK?
    // 1 1 2 1 2の時, 3 + 1 = 4通りあるが, 1の時は3C2 -> 2C2となって-2、2の時は(2C2 -> 1C2)となって-1
    long long total_comb = 0;
    for (auto it = count.begin(); it != count.end(); it++) {
        total_comb += combination(it->second, 2);
    }

    // 引いていく
    for (int i = 0; i < N; i++) {
        // A[i]による減少分を計算
        long long before = combination(count[A[i]], 2);
        long long after = combination(count[A[i]] - 1, 2);
        cout << total_comb - before + after << endl;
    }
}