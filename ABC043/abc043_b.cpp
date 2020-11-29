#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    string res = "";
    for (char c: s) {
        if (c == 'B') {
            if (res.length() > 0) {
                res = res.substr(0, res.length() - 1);
            }
        } else {
            res += c;
        }
    }
    cout << res << endl;
}