#include <iostream>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;
    
    while (T--) {
        int A, B, C, D;
        cin >> A >> B; // Initial score
        cin >> C >> D; // Target score
        
        // Check if both scores C and D are greater than or equal to A and B respectively
        // If true, output "POSSIBLE", otherwise "IMPOSSIBLE"
        if (C >= A && D >= B) {
            cout << "POSSIBLE" << endl;
        } else {
            cout << "IMPOSSIBLE" << endl;
        }
    }
    
    return 0;
}