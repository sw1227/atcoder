#include <iostream>
using namespace std;


int main() {
    int A, B, C, X;
    cin >> A; // 500
    cin >> B; // 100
    cin >> C; // 50
    cin >> X; // 50 * int


    int result = 0;
    for (int i = 0; i <= min(X / 500, A); i++) {
        // use 500 exactly i times
        int rest = X - 500*i;
        for (int j = 0; j <= min(rest / 100, B); j++) {
            // use 100 exactly j times
            int rest2 = rest - 100*j;
            if ((rest2 / 50) <= C) result++;
        }
    }

    cout << result << endl;
}