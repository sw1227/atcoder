#include <iostream>

using namespace std;

int main() {
    int N;
    string S;
    cin >> N;
    cin >> S;

    int ret = 0;
    int curr = 0;
    for (char c: S) {
        if (c == 'I') curr++;
        if (c == 'D') curr--;
        if (curr > ret) ret = curr;
    }
    cout << ret << endl;
}