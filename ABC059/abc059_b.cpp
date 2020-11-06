#include <iostream>

using namespace std;

bool is_first_greater(string s1, string s2) {
    if ((s1[0] - '0') > (s2[0] - '0')) {
        return true;
    } else if ((s1[0] - '0') < (s2[0] - '0')) {
        return false;
    } else {
        return is_first_greater(s1.substr(1), s2.substr(1));
    }
}

int main() {
    string A, B;
    cin >> A;
    cin >> B;

    if (A.length() > B.length()) {
        cout << "GREATER" << endl;
    } else if (A.length() < B.length()) {
        cout << "LESS" << endl;
    } else { // Same length
        if (A == B) {
            cout << "EQUAL" << endl;
        } else {
            if (is_first_greater(A, B)) cout << "GREATER" << endl;
            else cout << "LESS" << endl;
        }
    }
}