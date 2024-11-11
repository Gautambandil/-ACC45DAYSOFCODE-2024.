
#include <iostream>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;
    
    // Time spent watching the first Y minutes at twice the speed
    int timeFirstPart = Y / 2;
    
    // Time spent watching the remaining part at normal speed
    int timeSecondPart = X - Y;
    
    // Total time spent
    int totalTime = timeFirstPart + timeSecondPart;
    
    cout << totalTime << endl;
    
    return 0;
}