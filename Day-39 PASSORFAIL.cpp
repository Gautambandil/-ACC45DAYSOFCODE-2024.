#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N, X, P;
        cin >> N >> X >> P;

        // Calculate Chef's score
        int score = X * 3 - (N - X) * 1;

        // Check if the score is at least P
        if (score >= P) {
            cout << "PASS" << endl;
        } else {
            cout << "FAIL" << endl;
        }
    }
    
    return 0;
}