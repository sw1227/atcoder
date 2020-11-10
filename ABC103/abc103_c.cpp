#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_map>

using namespace std;

// vector<int> primes(100001);

// void count_primes(int n) {
//     unordered_map<int, int> count;
//     for (int i = 2; i * i <= n; i++) {
//         if (n % i > 0) continue;
//         while (n % i == 0) {
//             // cout << i << endl;
//             if (count.find(i) == count.end()) count[i] = 1;
//             else count[i]++;
//             n /= i;
//         }
//     }
//     // if (n != 1) cout << n << endl;
//     if (n != 1) {
//         if (count.find(n) == count.end()) count[n] = 1;
//         else count[n]++;
//     }

//     for (auto it = count.begin(); it != count.end(); it++) {
//         primes[it->first] = max(primes[it->first], it->second);
//     }
// }

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) cin >> a[i];

    // 十分大きなmを取ることで、全てのmodを最大にできる
    int res = 0;
    for (int i = 0; i < N; i++) {
        res += a[i] - 1;
    }
    cout << res << endl;

    // // 最小公倍数の範囲で全探索すると、最悪で10^5 * 3000 = 3*10^8なのでいけそう? => 嘘！！
    // for (int i = 0; i < N; i++) {
    //     // a[i]の素因数を求めてprimesをmaxで更新
    //     // cout << "a = " << a[i] << endl;
    //     count_primes(a[i]);
    // }
    // long long lcm = 1;
    // for (int i=2; i<primes.size(); i++) {
    //     if (primes[i] > 0) {
    //         lcm *= (long long)pow(i, primes[i]);
    //     }
    // }
    // cout << "lcm" << lcm << endl;

    // int res = 0;
    // for (int m = 1; m < lcm; m++) {
    //     int f = 0;
    //     for (int j = 0; j < N; j++) {
    //         f += m % a[j];
    //     }
    //     if (f > res) res = f;
    // }
    // cout << res << endl;
}