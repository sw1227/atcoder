#include <iostream>
#include <stack>

using namespace std;

int main() {
    string S;
    cin >> S;
    int N = S.length();

    int res = 0;
    stack<char> st;

    for (int i = 0; i < N; i++) {
        if (st.empty()) {
            st.push(S[i]);
        } else {
            if (st.top() != S[i]) {
                res += 2;
                st.pop();
            } else {
                st.push(S[i]);
            }
        }
    }

    cout << res << endl;
}