#include <iostream>
#include <vector>
using namespace std;

const int INF = 100000000;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i< N; i++) {
        cin >> A[i];
    }
    int result = INF;

    for (int i: A) {
        int count = 0;
        while (i % 2 == 0) {
            i /= 2;
            count++;
        }
        if (count < result) {
            result = count;
        }
    }

    cout << result;
}