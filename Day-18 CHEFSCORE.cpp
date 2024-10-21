#include <iostream>
using namespace std;

int main() {
    int T;  // Number of test cases
    cin >> T;

    while (T--) {
        int N, X, Y;  // N: number of problems, X: max marks per problem, Y: score Chef wants
        cin >> N >> X >> Y;

        // Maximum possible marks is N * X
        int maxMarks = N * X;

        // Chef can achieve Y marks if Y is divisible by X and Y is in the range [0, N * X]
        if (Y % X == 0 && Y <= maxMarks) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}