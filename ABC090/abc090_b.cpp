#include <iostream>

using namespace std;

bool is_reversible(int n) {
    string s = to_string(n);
    int ok = true;
    for (int i = 0; i < s.length() / 2; i++) {
        if (s[i] != s[s.length() - i - 1]) {
            ok = false;
            break;
        }
    }

    return ok;
}

int main() {
    int A, B;
    cin >> A >> B;

    int res = 0;
    for (int i = A; i <=B; i++) {
        if (is_reversible(i)) res++;
    }
    cout << res << endl;
}