#include <iostream>
#include <vector>

using namespace std;

int gcd(int n, vector<int> A) {
    int ret = 0;
    for (int i = 0; i < A.size(); i++) {
        if (A[i] % n == 0) ret++;
    }
    return ret;
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    int max_gcd = 0;
    int res = 0;
    for (int i=2; i<=1000; i++) {
        int gcd_deg = gcd(i, A);
        if (gcd_deg > max_gcd) {
            res = i;
            max_gcd = gcd_deg;
        }
    }
    cout << res << endl;
}