#include <iostream>

using namespace std;

// 最大公約数
long long gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

// 最小公倍数
long long lcm(long long a, long long b) {
    long long d = gcd(a, b);
    return a / d * b;
}


int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    // 全探索は無理なので, CまたはDで割り切れるものを引く
    long long res = B - A + 1; // A以上B以下全ての数

    // nで割り切れるものは？
    // A以上最小: n * ceil(A/n) = n * ((A + n - 1) / n)
    // B以下最大: n * floor(B / n)
    // これを使う

    // Cで割り切れるもの
    res -= 1 + ((C * (B / C)) - (C * ((A + C - 1) / C))) / C;
    // Dで割り切れるもの
    res -= 1 + ((D * (B / D)) - (D * ((A + D - 1) / D))) / D;

    // CとDの両方で割り切れるもの
    long long l = lcm(C, D);
    res += 1 + ((l * (B / l)) - (l * ((A + l - 1) / l))) / l;

    cout << res << endl;
}