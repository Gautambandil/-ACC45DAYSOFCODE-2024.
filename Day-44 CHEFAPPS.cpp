#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases
    while (T--) {
        int S, X, Y, Z;
        cin >> S >> X >> Y >> Z;

        // Calculate available unused memory
        int unused_memory = S - (X + Y);

        if (unused_memory >= Z) {
            // Case 0: Enough memory is already available
            cout << 0 << endl;
        } else if (unused_memory + max(X, Y) >= Z) {
            // Case 1: Delete the larger app to free enough space
            cout << 1 << endl;
        } else {
            // Case 2: Delete both apps
            cout << 2 << endl;
        }
    }
    return 0;
}