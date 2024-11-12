#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        int waterRequiredPerPerson = 2 * Y;
        int maxPeople = X / waterRequiredPerPerson;
        cout << maxPeople << endl;
    }
    return 0;
}