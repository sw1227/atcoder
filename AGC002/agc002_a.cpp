#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a > 0) {
        cout << "Positive" << endl;
    } else if (b >= 0) {
        cout << "Zero" << endl;
    } else {
        // a <= b < 0: all negative
        if ((b - a) % 2 == 0) cout << "Negative" << endl;
        else cout << "Positive" << endl;
    }
}