// Check if an array is sorted in ascending order.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool isSorted = true; // Variable to check if the array is sorted
    for (int i = 1; i < n; i++) { // Start from the second element
        if (arr[i] < arr[i - 1]) {
            isSorted = false; // Array is not sorted
            break;
        }
    }

    if (isSorted) {
        cout << "Array is in sorted order" << endl;
    } else {
        cout << "Array is not in sorted order" << endl;
    }

    return 0;
}
