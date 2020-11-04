#include <iostream>

using namespace std;

// 無限ループはa=b=cのみと考えていいのか？
// => A <= B <= Cとして、幅がC-Aだったのが, (b+c)/2 - (a+b)/2 = (c-a)/2となって1/2になる。
// ならないのは奇数でストップするかA=Cの時のみ。
int count(int a, int b, int c) {
    if ((a % 2 == 1) || (b % 2 == 1) || (c % 2 == 1)) return 0;
    if ((a == b) && (b == c)) return -1;
    return 1 + count((b+c)/2, (c+a)/2, (a+b)/2);
}

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    // cout << A << B << C;

    // 2a, 2b, 2c => b+c, a+c, a+b
    // => a+(b+c)/2, b+(c+a)/2, c+(a+b)/2
    // => 3/4(b+c) + a/2, ...
    // (1) a, b, c: odd => even, even, even
    // (2) a, b: odd, c: even => odd, odd, even => end
    // (3) a: odd, b,c: even => even, odd, odd => end
    // (4) a, b, c: even => even, even, even

    cout << count(A, B, C) << endl;
}
