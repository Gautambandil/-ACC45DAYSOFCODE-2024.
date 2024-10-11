#include <iostream>
#include <algorithm>  // For std::max
using namespace std;

int main() {
    int T;  // Number of test cases
    cin >> T;

    // Loop through each test case
    while (T--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        // Calculate the possible combinations of tastiness
        int option1 = a + c;  // A and C
        int option2 = a + d;  // A and D
        int option3 = b + c;  // B and C
        int option4 = b + d;  // B and D

        // Find the maximum tastiness
        int maxTastiness = max({option1, option2, option3, option4});

        // Output the result
        cout << maxTastiness << endl;
    }

    return 0;
}