#include <iostream>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;
    
    while (T--) {
        int N, X; // N = total cards, X = number of face-up cards
        cin >> N >> X;
        
        // The number of cards that are face-down will be N - X
        int face_down = N - X;
        
        // The minimum flips required will be the minimum of X (face-up cards) and face_down (face-down cards)
        cout << min(X, face_down) << endl;
    }

    return 0;
}