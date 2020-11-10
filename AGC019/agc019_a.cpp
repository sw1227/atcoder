#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int Q, H, S, D;
    cin >> Q >> H >> S >> D;
    int N;
    cin >> N;

    int min_s = min({4*Q, 2*H, S}); // min price for 1L
    int min_d = min(2*min_s, D); // min price for 2L
    int n_d = N / 2;
    int n_s = N % 2;
    // cout << min_s << " " << min_d << " " << n_d << " " << n_s << endl;
    long long res = (long long)n_d * min_d + n_s * min_s;
    cout << res << endl;
}