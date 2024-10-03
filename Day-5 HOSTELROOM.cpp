#include <iostream>
#include <vector>
#include <algorithm> // for max function
using namespace std;

int main() {
    int T; // number of test cases
    cin >> T;
    
    while (T--) {
        int N, X; // N: length of array A, X: initial number of people
        cin >> N >> X;
        
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i]; // input array A
        }
        
        int currentPeople = X; // people in the room initially
        int maxPeople = X;     // maximum number of people at any time
        
        for (int i = 0; i < N; i++) {
            currentPeople += A[i];  // update people in the room
            maxPeople = max(maxPeople, currentPeople); // track max number of people
        }
        
        cout << maxPeople << endl; // output the result for each test case
    }
    
    return 0;
}