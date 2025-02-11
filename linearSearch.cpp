#include <iostream>
#include <vector>
using namespace std;

int findFirstOccurrence(const vector<int>& arr, int x) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == x) {
            return i;  // Return first occurrence
        }
    }
    return -1;  // Element not found
}

int main() {
    vector<int> arr = {10, 8, 30, 4, 5};  
    int x = 5;    
    cout << findFirstOccurrence(arr, x) << endl;  // Output: 4

    return 0;
}
