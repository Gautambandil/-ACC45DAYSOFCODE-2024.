#include <iostream>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int X, A, B;
        cin >> X >> A >> B;

        // Calculate the total score
        int totalScore = A * 1 + B * 2;

        // Check if Chef qualifies
        if (totalScore >= X) {
            cout << "Qualify" << endl;
        } else {
            cout << "NotQualify" << endl;
        }
    }

    return 0;
}