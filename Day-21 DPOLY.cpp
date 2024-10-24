#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;
    
    while (T--) {
        int N; // Number of terms in the polynomial
        cin >> N;
        
        vector<int> A(N); // Coefficients of the polynomial
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        
        // Find the degree of the polynomial
        int degree = -1;
        for (int i = N - 1; i >= 0; i--) {
            if (A[i] != 0) {
                degree = i;
                break;
            }
        }
        
        // Output the degree
        cout << degree << endl;
    }
    
    return 0;
}