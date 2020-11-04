#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int n) {
    if (n < 2) return false;
    for (int i=2; i <= (int)sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int X;
    cin >> X;

    int i = X;
    while (true) {
        if (is_prime(i)) break;
        else i++;
    }
    cout << i << endl;
}