#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N;
    vector<int> T(N);
    for (int i = 0; i < N; i++) cin >> T[i];
    cin >> M;

    int total = 0;
    for (int i = 0; i < N; i++) total += T[i];

    vector<int> time(M);
    for (int i = 0; i < M; i++) {
        int P, X;
        cin >> P >> X;
        time[i] = total - T[P-1] + X;
    }
    for (int i = 0; i < M; i++) cout << time[i] << endl;
}