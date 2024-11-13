#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T; // Read number of test cases

    while (T--) {
        int A, B, C;
        cin >> A >> B >> C; // Read the prices of the items

        // Calculate the minimum price to get the item for free
        int minPrice = min({A, B, C});

        // Total cost after discount
        int totalCost = A + B + C - minPrice;

        cout << totalCost << endl; // Output the result for this test case
    }

    return 0;
}