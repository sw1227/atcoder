#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) cin >> a[i];

    int res = 0;
    for (int i = 0; i < N; i++) {
        // i+1はa[i]が好きで、a[i]はa[a[i]-1]が好き
        if (a[a[i] - 1] == i + 1) res++;
    }
    cout << res / 2 << endl;
}