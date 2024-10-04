#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  // Number of test cases
    while (T--) {
        int X;
        cin >> X;  // Time when Janmansh starts doing the assignments
        if (X + 3 <= 10) {  // He needs 3 hours to complete all assignments
            cout << "Yes" << endl;  // If he can finish by 10 pm
        } else {
            cout << "No" << endl;  // If he cannot finish by 10 pm
        }
    }
    return 0;
}