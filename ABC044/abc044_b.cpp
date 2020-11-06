#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    string w;
    cin >> w;

    string alphabets = "abcdefghijklmnopqrstuvwxyz";
    unordered_map<char, int> m;
    for (char c: alphabets) m[c] = 0;
    for (char c: w) m[c] += 1;

    string res = "Yes";
    for (auto it = m.begin(); it != m.end(); it++) {
        if (it->second % 2 != 0) {
            res = "No";
            break;
        }
    }
    cout << res << endl;
}