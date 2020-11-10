#include <iostream>
#include <vector>
#include <unordered_map>
#include <cmath>

using namespace std;

int main() {
    int N, M;
    cin >> N;
    vector<string> s(N);
    for (int i = 0; i < N; i++) cin >> s[i];
    cin >> M;
    vector<string> t(M);
    for (int i = 0; i < M; i++) cin >> t[i];

    unordered_map<string, int> count;
    for (int i = 0; i < N; i++) {
        if (count.find(s[i]) == count.end()) count[s[i]] = 1;
        else count[s[i]]++;
    }
    for (int i = 0; i < M; i++) {
        if (count.find(t[i]) == count.end()) count[t[i]] = -1;
        else count[t[i]]--;
    }

    int res = 0;
    for (auto it = count.begin(); it != count.end(); it++) {
        if (it->second > res) res = it->second;
    }
    cout << max(0, res) << endl;
}