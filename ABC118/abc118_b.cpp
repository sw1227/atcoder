#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> like(M, 0);
    for (int i=0; i<N; i++) {
        int K;
        cin >> K;
        for (int j = 0; j < K; j++) {
            int A;
            cin >> A;
            like[A-1] += 1;
        }
    }
    int res = 0;
    for (int i = 0; i < M; i++) {
        if (like[i] == N) res++;
    }
    cout << res << endl;
}