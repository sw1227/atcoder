#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int N, M;
    cin >> N;
    vector<int> D(N);
    for (int i = 0; i < N; i++) cin >> D[i];
    cin >> M;
    vector<int> T(M);
    for (int i = 0; i < M; i++) cin >> T[i];

    unordered_map<int, int> count;
    for (int i = 0; i < N; i++) {
        if (count.find(D[i]) == count.end()) count[D[i]] = 1;
        else count[D[i]]++;
    }

    bool ok = true;
    for (int i = 0; i < M; i++) {
        if ((count.find(T[i]) != count.end()) && (count[T[i]] > 0)) {
            count[T[i]]--;
        } else {
            ok = false;
            break;
        }
    }

    if (ok) cout << "YES" << endl;
    else cout << "NO" << endl;
}