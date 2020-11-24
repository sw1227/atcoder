#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    // Greedy?
    int res = 0;

    enum class State {Ascdending, Descending, Same};
    State state = State::Same;
    for (int i = 1; i < N; i++) {
        if (state == State::Ascdending) {
            if (A[i-1] > A[i]) {
                state = State::Same;
                res++;
            }
        } else if (state == State::Descending) {
            if (A[i-1] < A[i]) {
                state = State::Same;
                res++;
            }
        } else {
            // same: can be ascending or descending
            if (A[i-1] > A[i]) state = State::Descending;
            if (A[i-1] < A[i]) state = State::Ascdending;
        }
    }

    // +1: count segments, not turning point
    cout << res + 1 << endl;
}