#include <iostream>

using namespace std;

int main() {
    string S;
    cin >> S;
    int n[S.length()];
    for (int i = 0; i < S.length(); i++) n[i] = S[i] - '0';

    // string res;
    char res[10];
    for (char op1: {'+', '-'}) {
        for (char op2: {'+', '-'}) {
            for (char op3: {'+', '-'}) {
                int num = n[0];
                if (op1 == '+') num += n[1];
                else num -= n[1];
                if (op2 == '+') num += n[2];
                else num -= n[2];
                if (op3 == '+') num += n[3];
                else num -= n[3];
                if (num == 7) sprintf(res, "%d%c%d%c%d%c%d=7", n[0], op1, n[1], op2, n[2], op3, n[3]);
            }
        }
    }
    cout << res << endl;
}