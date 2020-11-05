#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, K, Q;
    cin >> N >> K >> Q;
    vector<int> A(Q);
    for (int i = 0; i < Q; i++) cin >> A[i];

    vector<int> score(N, 0);
    for (int a: A) {
        // a: 1, ..., N
        score[a-1] += 1;
    }

    for (int i = 0; i < N; i++) {
        // A_iがscore[i]だけ正解した場合、K-(Q-score[i])点
        if (K - (Q - score[i]) > 0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}