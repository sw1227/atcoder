#include <iostream>
#include <set>

using namespace std;

int main() {
    string S;
    cin >> S;

    set<char> cset;
    for (char c: S) {
        cset.insert(c);
    }

    string alphabets = "abcdefghijklmnopqrstuvwxyz";
    string res = "None";
    for (char c: alphabets) {
        if (cset.find(c) == cset.end()) {
            res = c;
            break;
        }
    }
    cout << res << endl;
}