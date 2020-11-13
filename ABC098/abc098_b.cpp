#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    // brute force
    int res = 0;
    for (int i = 1; i < N; i++) {
        vector<int> count(26, 0);
        for (int j = 0; j < N; j++) {
            if (j < i) {
                if (count[S[j] - 'a'] == 0) count[S[j] - 'a'] = 1;
            } else {
                if (count[S[j] - 'a'] == 1) count[S[j] - 'a'] = 2;
            }
        }
        int n = 0;
        for (int c: count) {
            if (c == 2) n++;
        }
        if (n > res) res = n;
    }
    cout << res << endl;
}