#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool is_pow(int n) {
    vector<bool> v(1000); // v[i]: i+1 is b^p (b >= 1, p >= 2)
    v[0] = true;
    for (int b = 2; b <= 32; b++) {
        int p = 2;
        while (pow(b, p) <= 1000) {
            v[(int)pow(b, p)-1] = true;
            p++;
        }
    }
    return v[n-1];
}

int main() {
    int X;
    cin >> X;

    int res = 1;
    for (int i = 1; i <= X; i++) {
        if (is_pow(i)) {
            res = i;
        }
    }
    cout << res << endl;
}