#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, L;
    cin >> N >> L;
    vector<string> S(N);
    for (int i = 0; i < N; i++) cin >> S[i];
    sort(S.begin(), S.end());
    string res = "";
    for (int i = 0; i < N; i++) {
        res += S[i];
    }
    cout << res << endl;
}