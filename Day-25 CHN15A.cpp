#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;  // Number of test cases

    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<int> characteristics(N);
        for (int i = 0; i < N; i++) {
            cin >> characteristics[i];
        }

        int count = 0;
        for (int i = 0; i < N; i++) {
            // Add K to each characteristic value
            int newValue = characteristics[i] + K;
            // Check if the new value is divisible by 7
            if (newValue % 7 == 0) {
                count++;
            }
        }

        // Output the result for the current test case
        cout << count << endl;
    }

    return 0;
}