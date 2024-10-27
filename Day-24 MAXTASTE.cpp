#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        // Calculate the possible tastiness values
        int max_tastiness = max({a + c, a + d, b + c, b + d});
        
        // Output the maximum possible tastiness for this test case
        cout << max_tastiness << endl;
    }
    
    return 0;
}