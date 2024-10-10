#include <iostream>
using namespace std;

int main() {
    int T;  // Number of test cases
    cin >> T;

    while (T--) {
        int X, Y;  // X = number of problems submitted, Y = number of problems approved
        cin >> X >> Y;

        // Check if at least 50% of problems are approved
        if (Y * 2 >= X) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}