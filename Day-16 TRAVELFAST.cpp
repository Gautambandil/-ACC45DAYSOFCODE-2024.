#include <iostream>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;
    
    while (T--) {
        int X, Y; // Time taken by Bike and Car
        cin >> X >> Y;
        
        if (X < Y) {
            cout << "BIKE" << endl;
        } else if (X > Y) {
            cout << "CAR" << endl;
        } else {
            cout << "SAME" << endl;
        }
    }
    
    return 0;
}