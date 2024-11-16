#include <iostream>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        long long N; // Number of gifts Chef wants to buy
        cin >> N;

        // Calculate the minimum coins required
        long long coins = (N / 5) * 4 + (N % 5);
        
        cout << coins << endl;
    }

    return 0;
}