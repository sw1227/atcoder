#include <iostream>
#include <cmath>

using namespace std;

int main() {
    string S;
    cin >> S;

    int res = 0;
    for (int i=0; i < S.size(); i++) {
        char c = S[i];
        if (((i % 2 == 0) && (c == '0')) || ((i % 2 == 1) && (c == '1'))) res++;
    }
    cout << min(res, (int)S.size() - res) << endl;
}