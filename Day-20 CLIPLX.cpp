#include <iostream>
using namespace std;

int main() {
    int T;  // Number of test cases
    cin >> T;

    while (T--) {
        int X, Y;  // X: Points needed, Y: Matches remaining
        cin >> X >> Y;

        // Calculate the minimum number of wins needed
        int winsNeeded = max(0, X - Y);

        // Output the result
        cout << winsNeeded << endl;
    }

    return 0;
}