#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N, X;
        cin >> N >> X;
        
        vector<int> health(N);
        for (int i = 0; i < N; i++) {
            cin >> health[i];
        }
        
        // Single-target mode: Calculate the time by killing each enemy individually
        int singleTargetTime = 0;
        for (int i = 0; i < N; i++) {
            singleTargetTime += (health[i] + X - 1) / X; // ceil(health[i] / X)
        }
        
        // Multi-target mode: Find the maximum health as all enemies take 1 damage per second
        int multiTargetTime = *max_element(health.begin(), health.end());
        
        // Minimum of both modes
        int result = min(singleTargetTime, multiTargetTime);
        cout << result << endl;
    }
    
    return 0;
}