#include <iostream>
#include <string>
using namespace std;

// Function to encode the message
string encodeMessage(string S, int N) {
    // Step 1: Swap adjacent pairs
    for (int i = 0; i < N - 1; i += 2) {
        swap(S[i], S[i + 1]);
    }

    // Step 2: Replace letters according to the described transformation
    for (int i = 0; i < N; i++) {
        S[i] = 'z' - (S[i] - 'a'); // Transformation of 'a' to 'z', 'b' to 'y', ..., 'z' to 'a'
    }

    return S;
}

int main() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        int N;
        string S;

        // Read input
        cin >> N >> S;

        // Encode the message and print the result
        cout << encodeMessage(S, N) << endl;
    }

    return 0;
}