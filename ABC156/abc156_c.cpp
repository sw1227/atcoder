#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;
    int X[N];
    for (int i=0; i<N; i++) cin >> X[i];

    int sum = 0;
    for (int i=0; i<N; i++) sum += X[i];
    float avg = 1.0 * sum / N;
    int pos1 = floor(avg);
    int pos2 = ceil(avg);

    int m1 = 0;
    int m2 = 0;
    for (int i=0; i<N; i++) {
        m1 += (X[i] - pos1) * (X[i] - pos1);
        m2 += (X[i] - pos2) * (X[i] - pos2);
    }

    cout << min(m1, m2) << endl;
}