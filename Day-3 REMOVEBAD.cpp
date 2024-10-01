#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int N;
        cin >> N; // Length of the array
        
        unordered_map<int, int> freq; // Frequency map to count occurrences of each element
        int max_freq = 0; // Variable to store the maximum frequency
        
        // Process the array
        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;
            freq[x]++; // Count frequency of each element
            max_freq = max(max_freq, freq[x]); // Keep track of the highest frequency
        }
        
        // Minimum operations to make all elements same
        cout << N - max_freq << endl; // Remove all elements except the ones with maximum frequency
    }

    return 0;
}