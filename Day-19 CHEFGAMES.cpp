#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; // Input number of test cases
    
    while (T--) {
        int R1, R2, R3, R4;
        cin >> R1 >> R2 >> R3 >> R4; // Input the decisions of the 4 referees
        
        // If any referee has given a decision of 1 (out), the result is OUT
        if (R1 == 1 || R2 == 1 || R3 == 1 || R4 == 1) {
            cout << "OUT" << endl;
        } else {
            cout << "IN" << endl; // All referees agreed the ball is in
        }
    }
    
    return 0;
}