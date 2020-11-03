#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int num = a * pow(10, to_string(b).size()) + b;
    int s = floor(sqrt((float)num));
    if ((s*s == num)) cout << "Yes" << endl;
    else cout << "No" << endl;
}