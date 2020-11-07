#include <iostream>

using namespace std;

int main() {
    string S;
    cin >> S;

    // greedy?
    char l = 'X';
    int res = 0;
    bool carrying = false;
    for (int i = 0; i < S.length(); i++) {
        if (carrying) {
            res++;
            l = 'X';
            carrying = false;
        } else {
            if (S[i] == l) {
                carrying = true;
            } else {
                res++;
                l = S[i];
            }
        }
    }
    cout << res << endl;
}