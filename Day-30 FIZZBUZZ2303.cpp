#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        // Calculate the number of ways to choose a captain and vice-captain
        int choices = N * (N - 1);
        
        cout << choices << endl;
    }
    
    return 0;
}