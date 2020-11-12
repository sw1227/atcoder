#include <iostream>
#include <cmath>

using namespace std;

int main() {
    string S;
    cin >> S;

    // 0<1>0>-1 -> 1<2>1>0 -> 0<2>1>0
    // 0<1>0>-1>-2<-1<0>-1<0<1<2<3<4>3>2>1<2 -> 14 + 2 * 17
    // 2<3>2>1>0<1<2>1<2<3<4<5<6>5>4>3<4
    // 0<3>2>1>0<1<2>0<1<2<3<4<5>2>1>0<1 -> 28
    // 0<>>>0<<>0<<<<<>>>0<
    // >0<, 0<, >0,として、0<<..<<>>...>0を見つける。0で挟まれた<<>>の<と>の多い方で極大が決まり、反対側は0から1ずつ増やしていく
    // 3>2>1>

    long long res = 0; // long long necessary!

    // Left: >>> -> 3>2>1>0
    int left = 0;
    while (S[left] == '>') {
        left++;
        res += left;
        if (left > S.length() - 1) break;
    }
    // right: <<<< -> 0<1<2<3<4
    int right = 0;
    while (S[S.length() - 1 - right] == '<') {
        right++;
        res += right;
        if (right > S.length() - 1) break;
    }

    // Now, S is like <*>, which will be 0<*>0
    int n_l = 0; // <
    int n_g = 0; // >
    for (int i = left; i < S.length() - right; i++) {
        // cout << S[i] << endl;
        if (S[i] == '<') n_l++;
        else n_g++;

        if ((S[i] == '>') && ((i == S.length() - right - 1) || (S[i+1] == '<'))) {
            // end of <<>>
            for (int j = 0; j <= max(n_l, n_g); j++) {
                // 4, 2 -> 0<1<2<3<4>1>0
                if (j < min(n_l, n_g)) {
                    res += 2 * j;
                } else {
                    res += j;
                }
            }

            // reset
            n_l = 0;
            n_g = 0;
        }
    }

    cout << res << endl;
}