#include <iostream>

using namespace std;

int main() {
    string O, E;
    cin >> O;
    cin >> E;

    for (int i = 0; i < O.length(); i++) {
        cout << O[i];
        if ((i < O.length() - 1) || (E.length() == O.length())) {
            cout << E[i];
        }
    }
    cout << endl;
}