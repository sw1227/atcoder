#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    // b[i]は, A[i]-1, A[i], A[i]+1のいずれか
    // A[i]がevenならodd, even, odd, A[i]がoddならeven, odd, even
    // b[i]のいずれかがevenなら良い 全てがoddになるものを3**nから引けば良い
    int all_odd = 1;
    for (int i = 0; i < N; i++) {
        if (A[i] % 2 == 0) {
            // A[i]-1, A[i]+1 is odd
            all_odd *= 2;
        }
        // else: A[i] is odd: *=1 is do-nothing
    }
    cout << (int)pow(3, N) - all_odd << endl;
}