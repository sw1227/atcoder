#include <iostream>

using namespace std;


int main() {
    int N, A, B;
    string S;
    cin >> N >> A >> B;
    cin >> S;

    int passed = 0;
    int foreign = 0;

    for (int i=0; i<N; i++) {
        if (S[i] == 'a') {
            if (passed < A + B) {
                cout << "Yes" << endl;
                passed++;
            } else {
                cout << "No" << endl;
            }
        } else if (S[i] == 'b') {
            if ((passed < A + B) && (foreign < B)) {
                cout << "Yes" << endl;
                passed++;
            } else {
                cout << "No" << endl;
            }
            foreign++;
        } else { // c
            cout << "No" << endl;
        }
    }

}