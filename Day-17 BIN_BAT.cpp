#include <iostream>
using namespace std;

int main() {
    int T;  // Number of test cases
    cin >> T;
    
    while (T--) {
        int N, A, B;  // N: number of teams, A: time for each round, B: break time
        cin >> N >> A >> B;
        
        // Total rounds are log2(N) because N is a power of 2
        int rounds = 0;
        while (N > 1) {
            N /= 2;
            rounds++;
        }
        
        // Total time calculation: (rounds * A) + (breaks * B), where breaks = rounds - 1
        int total_time = (rounds * A) + ((rounds - 1) * B);
        
        cout << total_time << endl;
    }
    
    return 0;
}