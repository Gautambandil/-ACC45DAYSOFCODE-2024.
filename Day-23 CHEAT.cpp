#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  // Number of test cases
    while (T--) {
        int N;
        cin >> N;  // Number of spooky days
        
        // Calculate the number of Tuesdays Dracula can have his meal
        if (N < 2) {
            cout << 0 << endl;  // No Tuesdays in 1 day
        } else {
            int tuesdays = (N - 2) / 7 + 1;
            cout << tuesdays << endl;
        }
    }
    return 0;
}
