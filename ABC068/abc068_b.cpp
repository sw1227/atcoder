#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int res = 1;
    int n_max = 0;
    for (int i=1; i<=N; i++) {
        int count = 0;
        int n = i;
        while (n % 2 == 0) {
            count++;
            n /= 2;
        }
        if (count > n_max) {
            res = i;
            n_max = count;
        }
    }

    cout << res << endl;
}