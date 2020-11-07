#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    int start, end;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'A') {
            start = i;
            break;
        }
    }
    for (int i = s.length()-1; i >= 0; i--) {
        if (s[i] == 'Z') {
            end = i;
            break;
        }
    }
    cout << end - start + 1 << endl;
}