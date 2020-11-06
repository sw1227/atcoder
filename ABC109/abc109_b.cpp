#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int N;
    cin >> N;

    set<string> sset;
    bool ok = true;
    string prev;
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        if (!(sset.find(s) == sset.end())) ok = false;
        sset.insert(s);
        if (i > 0) {
            if (prev[prev.length() - 1] != s[0]) ok = false;
        }
        prev = s;
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;
}