#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T;  // Number of test cases
    cin >> T;

    while (T--) {
        int N, K, M;  // N: number of candies, K: pockets per bag, M: max candies per pocket
        cin >> N >> K >> M;

        // Total capacity of one bag
        int capacity_per_bag = K * M;

        // Calculate the minimum number of bags required
        int bags_needed = (N + capacity_per_bag - 1) / capacity_per_bag;  // Equivalent to ceil(N / capacity_per_bag)

        cout << bags_needed << endl;
    }

    return 0;
}
