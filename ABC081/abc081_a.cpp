#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int result = 0;
    for (char& c: s) {
        if (c == '1') result++;
    }

    cout << result << endl;
}