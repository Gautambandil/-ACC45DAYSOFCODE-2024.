#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  // Read the number of test cases

    while (T--) {
        int N;
        cin >> N;  // Read the number of bits for this test case

        if (N % 4 == 0) {
            cout << "Good" << endl;
        } else {
            cout << "Not Good" << endl;
        }
    }

    return 0;
}