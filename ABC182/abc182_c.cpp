#include <iostream>
#include <vector>

using namespace std;

int main() {
    string S;
    cin >> S;

    vector<int> N(S.length());
    for (int i=0; i<S.length(); i++) {
        N[i] = S[i] - '0';
    }

    int sum = 0;
    int n_1 = 0; // # of mod 1
    int n_2 = 0; // # of mod 2
    for (int i = 0; i < N.size(); i++) {
        sum += N[i];
        if (N[i] % 3 == 1) n_1++;
        if (N[i] % 3 == 2) n_2++;
    }

    // それぞれの桁の数値を足して3で割れたらOK
    // あまりが1ならあまりが1のやつを1つ消すか、なければあまりが2のやつを2つ消すか、それもなければ無理
    // あまりが2ならあまりが2のやつを1つ消すか、なければあまりが1のやつを2つ消すか、それもなければ無理
    int res;
    if (sum % 3 == 0) {
        res = 0;
    } else if (sum % 3 == 1) {
        if (n_1 > 0) {
            res = 1;
        } else if (n_2 > 1) {
            res = 2;
        } else {
            res = -1;
        }
    } else {
        // sum % 3 == 2
        if (n_2 > 0) {
            res = 1;
        } else if (n_1 > 1) {
            res = 2;
        } else {
            res = -1;
        }
    }
    if (res == S.length()) cout << -1 << endl;
    else cout << res << endl;
}