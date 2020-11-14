#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    // ...だけの行は除外して、あとは列だけを除いていけばいい
    vector<string> a;
    for (int i = 0; i < H; i++) {
        string s;
        cin >> s;
        bool skip = true;
        for (int j = 0; j < W; j++) {
            if (s[j] == '#') {
                skip = false;
                break;
            }
        }
        // push if # is included
        if (!skip) a.push_back(s);
    }

    set<int> skipcols;
    for (int j = 0; j < W; j++) {
        // j列の除外有無を検討 少なくとも1つの行に#があるか
        bool skip = true;
        for (int i = 0; i < a.size(); i++) {
            if(a[i][j] == '#') {
                skip = false;
                break;
            }
        }
        if (skip) skipcols.insert(j);
    }

    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < W; j++) {
            if (skipcols.find(j) == skipcols.end()) {
                cout << a[i][j];
            }
        }
        cout << endl;
    }
}