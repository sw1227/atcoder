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
    if (cset.size() == S.size()) cout << "yes" << endl;
    else cout << "no" << endl;
}