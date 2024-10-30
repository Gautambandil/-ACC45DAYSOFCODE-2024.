#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int A, B, K;
        cin >> A >> B >> K;
        
        // Calculate the absolute distance between A and B
        int distance = abs(A - B);
        
        // Calculate the minimum number of steps required
        int steps = (distance + K - 1) / K;
        
        cout << steps << endl;
    }
    
    return 0;
}