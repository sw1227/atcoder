#include <iostream>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    // n * A % B = C
    // あまりが循環する場合でも最大でB
    bool res = false;
    for (int i = 1; i <= 100; i++) {
        if ((i * A) % B == C) res = true;
    }
    if (res) cout << "YES" << endl;
    else cout << "NO" << endl;
}