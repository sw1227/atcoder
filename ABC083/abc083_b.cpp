#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    int res = 0;
    for (int i=1; i<=N; i++) {
        int p = 0;
        int s = 0;
        while (true) {
            int d = i / pow(10, p);
            s += d % 10;
            if (d == 0) break;
            p++;
        }
        if ((s >= A) && (s <= B)) res += i;
    }

    cout << res;
}