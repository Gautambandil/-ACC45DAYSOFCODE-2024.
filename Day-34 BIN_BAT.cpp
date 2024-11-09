#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, A, B;
        cin >> N >> A >> B;

        int rounds = 0;
        int total_time = 0;

        // Calculate the number of rounds needed (log2(N) rounds)
        while (N > 1) {
            rounds++;
            N /= 2;
        }

        // Total time calculation
        total_time = rounds * A + (rounds - 1) * B;

        cout << total_time << endl;
    }

    return 0;
}