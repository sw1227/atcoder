#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int N; // <= 10^5
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    set<int> paper;
    for (int i = 0; i < N; i++) {
        bool exist = !(paper.find(A[i]) == paper.end());
        if (exist) {
            paper.erase(A[i]);
        } else {
            paper.insert(A[i]);
        }
    }
    cout << paper.size() << endl;
}