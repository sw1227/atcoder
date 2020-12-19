#include <iostream>
#include <sstream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int res = 0;
    for (int i = 1; i <= N; i++) {
        stringstream ss_oct;
        ss_oct << oct << i;
        string s_oct = ss_oct.str();
        string s_dec = to_string(i);
        bool ok = true;
        for (auto c: s_oct) {
            if (c == '7') ok = false;
        }
        for (auto c: s_dec) {
            if (c == '7') ok = false;
        }
        if (ok) res++;
    }
    cout << res << endl;
}