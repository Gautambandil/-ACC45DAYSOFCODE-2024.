#include <iostream>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int N, X; // Number of people and number of tiles
        cin >> N >> X;

        // Check if the number of tiles is divisible by the number of players
        if (X % N == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}