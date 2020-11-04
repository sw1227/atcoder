#include <iostream>
#include <vector>

using namespace std;


int collatz(int n) {
    if (n % 2 == 0) return n / 2;
    else return 3 * n + 1;
}


int main() {
    int s;
    cin >> s;
    vector<bool> visited(1000000, false);

    int a = s;
    visited[a] = true;
    int m = 1;
    while (true) {
        a = collatz(a);
        m++;
        if (visited[a]) {
            break;
        } else {
            visited[a] = true;
        }
    }
    cout << m << endl;
}