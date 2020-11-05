#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int A, B, C, D, E, F;
    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;
    cin >> E;

    int n = 0;
    if ((A%10 > 0) && (10 - A%10 > n)) n = 10 - A%10;
    if ((B%10 > 0) && (10 - B%10 > n)) n = 10 - B%10;
    if ((C%10 > 0) && (10 - C%10 > n)) n = 10 - C%10;
    if ((D%10 > 0) && (10 - D%10 > n)) n = 10 - D%10;
    if ((E%10 > 0) && (10 - E%10 > n)) n = 10 - E%10;

    cout <<
        ceil(A/10.0)*10 + ceil(B/10.0)*10 + ceil(C/10.0)*10 + ceil(D/10.0)*10 + ceil(E/10.0)*10 - n
    << endl;
}