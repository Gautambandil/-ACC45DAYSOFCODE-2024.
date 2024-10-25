#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T;  // Read the number of test cases

    while (T--) {
        int N;
        cin >> N;  // Read the number of problems
        int count_START38 = 0, count_LTIME108 = 0;

        for (int i = 0; i < N; ++i) {
            string contest_code;
            cin >> contest_code;
            
            // Count occurrences of START38 and LTIME108
            if (contest_code == "START38") {
                ++count_START38;
            } else if (contest_code == "LTIME108") {
                ++count_LTIME108;
            }
        }

        // Output the result for the current test case
        cout << count_START38 << " " << count_LTIME108 << endl;
    }

    return 0;
}