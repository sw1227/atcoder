#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> p(M);
    vector<string> S(M);
    for (int i = 0; i < M; i++) cin >> p[i] >> S[i];

    unordered_map<int, int> wa; // {p: # of WA}
    set<int> ac;
    for (int i = 0; i < M; i++) {
        if (S[i] == "AC") {
            ac.insert(p[i]);
        }
        if (S[i] == "WA") {
            if (ac.find(p[i]) == ac.end()) {
                // not solved
                if (wa.find(p[i]) == wa.end()) wa[p[i]] = 1;
                else wa[p[i]]++;
            } else {
                // already solved: do not add
            }
        }
    }

    int n_ac = 0;
    int n_wa = 0;
    for (auto it = ac.begin(); it != ac.end(); it++) {
        n_ac++;
        n_wa += wa[*it];
    }
    cout << n_ac << " " << n_wa << endl;
}