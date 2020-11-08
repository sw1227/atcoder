#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long N;
    cin >> N;

    // 最上位を1減らせばそれ以外は999...9にできる
    // それを超えるとしたら最上位を保ったまま残りを9にすることだが、
    // 元々そうなっている場合しか無理
    string s = to_string(N);

    int res = 0;
    for (char c: s) {
        res += (int)c - '0';
    }
    int res2 = s[0] - '0' - 1 + 9 * (s.length() - 1);
    cout << max(res,  res2)<< endl;
}