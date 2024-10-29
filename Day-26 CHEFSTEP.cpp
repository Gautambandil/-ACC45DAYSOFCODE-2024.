#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;  // number of test cases

    while (T--) {
        int N, K;
        cin >> N >> K;  // N distances and step length K

        vector<int> distances(N);
        for (int i = 0; i < N; ++i) {
            cin >> distances[i];  // read each distance
        }

        string result = "";
        for (int i = 0; i < N; ++i) {
            if (distances[i] % K == 0) {
                result += '1';  // traversable
            } else {
                result += '0';  // not traversable
            }
        }
        
        cout << result << endl;  // output the result for this test case
    }
    
    return 0;
}
