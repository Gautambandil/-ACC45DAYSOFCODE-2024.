#include <iostream>
#include <vector>
using namespace std;

bool isPseudoSorted(vector<int>& arr, int n) {
    int count = 0, index = -1;

    // Check how many places the array is not in non-decreasing order
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            count++;
            index = i;
        }
        if (count > 1) return false;  // If more than 1 such pair, return false
    }

    // Already sorted
    if (count == 0) return true;

    // Try to swap arr[index] and arr[index + 1] and check if it becomes sorted
    swap(arr[index], arr[index + 1]);

    // Check if swapping makes the array sorted
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] > arr[i + 1]) return false;
    }

    return true;
}

int main() {
    int t;
    cin >> t;  // Number of test cases
    while (t--) {
        int n;
        cin >> n;  // Size of the array
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];  // Input array
        }

        if (isPseudoSorted(arr, n)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}