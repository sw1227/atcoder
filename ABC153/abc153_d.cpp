#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long H;
    cin >> H;

    long long res = 0;
    long long n_monster = 1;
    long long h = H;
    while (true) {
        res += n_monster;
        if (h == 1) {
            break;
        }
        h = floor(h / 2);
        n_monster *= 2;
    }

    cout << res << endl;
}