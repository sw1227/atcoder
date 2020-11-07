#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string> S(N);
    for (int i = 0; i < N; i++) cin >> S[i];

    unordered_map<string, int> m;
    for (int i = 0; i < N; i++) {
        if (m.find(S[i]) == m.end()) m[S[i]] = 0;
        else m[S[i]]++;
    }

    vector<string> results;
    int max_n = 0;
    for (auto it = m.begin(); it != m.end(); it++) {
        if (it->second > max_n) {
            max_n = it->second;
            results.clear();
            results.push_back(it->first);
        } else if (it->second == max_n) {
            results.push_back(it->first);
        }
    }

    sort(results.begin(), results.end());
    for (auto r: results) {
        cout << r << endl;
    }
}