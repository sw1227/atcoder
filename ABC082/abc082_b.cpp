#include <iostream>
#include <algorithm>

using namespace std;


bool smaller(string a, string b) {
    // return a < b or not
    if (b.length() == 0) return false;
    if (a.length() == 0) return true;
    // else:
    if (a[0] - '0' > b[0] - '0') return false;
    if (a[0] - '0' < b[0] - '0') return true;
    // else: a[0] == b[0]
    return smaller(a.substr(1), b.substr(1));
}

int main() {
    string s, t;
    cin >> s >> t;

    // Noになるのは、sをできるだけ小さくしてtをできるだけ大きくしても無理な場合
    sort(s.begin(), s.end());
    sort(t.begin(), t.end(), greater<char>());
    if (smaller(s, t)) cout << "Yes" << endl;
    else cout << "No" << endl;
}