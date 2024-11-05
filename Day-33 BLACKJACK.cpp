#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  // Number of test cases

    while (T--) {
        int A, B;
        cin >> A >> B;

        // Calculate the required third number C
        int C = 21 - (A + B);

        // Check if C is within the valid range [1, 10]
        if (C >= 1 && C <= 10) {
            cout << C << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}