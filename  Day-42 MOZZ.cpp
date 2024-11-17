#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;
    
    while (T--) {
        int X, Y, R;
        cin >> X >> Y >> R;

        // Calculate total sticks eaten
        int extraSticks = R / 30;
        int totalSticks = X + extraSticks;

        // Calculate the maximum number of plates
        int plates = (totalSticks + Y - 1) / Y; // Use ceiling to ensure all sticks are covered

        cout << plates << endl;
    }

    return 0;
}