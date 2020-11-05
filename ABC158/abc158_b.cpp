#include <iostream>
#include <cmath>

using namespace std;

long long count_b(long long N, long long A, long long B) {
    if (A >= N) return N;
    if (A + B >= N) return A;

    // else: A + B < N
    long long ret = 0;
    long long n, r;
    n = N / (A + B);
    r = N % (A + B);
    ret += n * A;
    ret += min(r, A);
    return ret;
}

int main() {
    long long N, A, B;
    cin >> N >> A >> B;

    long long res = count_b(N, A, B);
    cout << res << endl;
}