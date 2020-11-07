#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    unordered_map<string, vector<pair<int, int>>> map; // city: (score, i)

    for (int i = 0; i < N; i++) {
        string S;
        int P;
        cin >> S >> P;
        if (map.find(S) == map.end()) map[S] = {};
        map[S].push_back(make_pair(P, i+1));
    }

    vector<string> names = {};
    for (auto it = map.begin(); it != map.end(); it++) {
        names.push_back(it->first);
    }
    sort(names.begin(), names.end());

    for (string name: names) {
        auto r = map[name];
        sort(r.begin(), r.end(), greater<pair<int, int>>());
        for (int i = 0; i < r.size(); i++) {
            cout << r[i].second << endl;
        }
    }
}