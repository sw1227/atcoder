#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    vector<int> sorted(N);
    partial_sort_copy(A.begin(), A.end(), sorted.begin(), sorted.end(), greater<int>());

    int max_value = sorted[0];

    for (int i = 0; i < N; i++) {
        if (A[i] == max_value) {
            cout << sorted[1] << endl;
        } else {
            cout << max_value << endl;
        }
    }
}