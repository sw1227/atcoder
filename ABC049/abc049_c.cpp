#include <iostream>
#include <vector>
using namespace std;

vector<string> words = {"dream", "dreamer", "erase", "eraser"};

bool endswith(string word, string part) {
    if (part.size() > word.size()) return false;
    return word.find(part, word.size() - part.size()) != string::npos;
}

// TODO: Memory Error!
bool possible(string str) {
    if (str.size() == 0) return true;

    for (auto word: words) {
        if (endswith(str, word)) {
            return possible(str.substr(0, str.size() - word.size()));
        }
    }

    return false;
}

int main() {
    string S;
    cin >> S;

    // TODO: memory error
    // if (possible(S)) {
    //     cout << "YES";
    // } else {
    //     cout << "NO";
    // }
    // cout << endl;

    bool ok = true;
    while (S.size() > 0) {
        bool ends_with_one = false;
        for (auto word: words) {
            if (endswith(S, word)) {
                S = S.substr(0, S.size() - word.size());
                ends_with_one = true;
                break;
            }
        }
        if (!ends_with_one) {
            ok = false;
            break;
        }
    }
    if (ok) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    cout << endl;
}