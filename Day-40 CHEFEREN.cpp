#include <iostream>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;
    
    while (T--) {
        int N, A, B;
        cin >> N >> A >> B;
        
        // Count of odd and even indexed episodes
        int oddCount = (N + 1) / 2;
        int evenCount = N / 2;
        
        // Total duration
        int totalDuration = (oddCount * B) + (evenCount * A);
        
        cout << totalDuration << endl;
    }
    
    return 0;
}