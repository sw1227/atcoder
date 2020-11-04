#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin >> N;

    vector<int> d(N);
    for (int i=0; i<N; i++) cin >> d[i];

    sort(d.begin(), d.end());
    int lower, upper;
    lower = d[N/2 - 1];
    upper = d[N/2];
    cout << upper - lower << endl;
}