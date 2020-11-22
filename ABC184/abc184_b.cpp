#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N, X;
    string S;
    cin >> N >> X;
    cin >> S;

    int res = X;
    for (int i = 0; i < N; i++) {
        if (S[i] == 'o') {
            res++;
        } else {
            res = max(0, res - 1);
        }
    }
    cout << res << endl;
}