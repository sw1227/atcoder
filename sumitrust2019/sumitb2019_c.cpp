#include <iostream>
#include <vector>

using namespace std;

int main() {
    int X;
    cin >> X;

    vector<bool> prices(X, false);
    for (int j: {100, 101, 102, 103, 104, 105}) prices[j-1] = true;
    for (int i = 99; i < X; i++) {
        if (!prices[i]) continue;
        for (int j: {100, 101, 102, 103, 104, 105}) {
            if ((i + j) < X) prices[i+j] = true;
        }
    }

    cout << prices[X-1] << endl;
}