#include <iostream>

using namespace std;

int main() {
    long long N;
    cin >> N;

    // iを何かで割ったあまりは最大でi
    // 1 2 3 4 5 6 7 8 9 10 11 12 13
    // 1, ..., N-1の和: N(N-1)/2
    cout << N * (N-1) / 2 << endl;
}