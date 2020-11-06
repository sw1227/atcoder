#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int price = 0;
    bool found = false;
    while (true) {
        price++;
        if (((int)floor(0.08 * price) == A) && ((int)floor(0.1 * price) == B)) {
            found = true;
            cout << price << endl;
            break;
        }
        if (price * 0.05 > A) break;
    }
    if (!found) cout << "-1" << endl;
}