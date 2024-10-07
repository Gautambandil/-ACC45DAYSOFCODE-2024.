#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  // Number of test cases
    while (T--) {
        int N, A;
        cin >> N >> A;  // N is the total population, A is the number of infected people
        // The minimum number of people that need to wear a mask is the smaller of the infected people (A) or the non-infected people (N-A)
        cout << min(A, N - A) << endl;
    }
    return 0;
}