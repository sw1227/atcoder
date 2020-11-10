#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;

    long long power = 1;
    for (int i = 0; i < N; i++) {
        power *= (i+1);
        power %= (int)pow(10, 9) + 7;
    }
    cout << power << endl;
}