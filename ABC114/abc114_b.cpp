#include <iostream>
#include <cmath>

using namespace std;

int main() {
    string S;
    cin >> S;

    int min_diff = 999;
    for (int i = 0; i < S.length() - 2; i++) {
        int n = stoi(S.substr(i, 3));
        int d = abs(n - 753);
        if (d < min_diff) min_diff = d;
    }
    cout << min_diff << endl;
}