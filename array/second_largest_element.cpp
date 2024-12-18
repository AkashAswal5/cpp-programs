//  Find the Second Largest Element in an Array.

#include <iostream>
#include <vector>
#include <limits.h> // For INT_MIN
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements in the array: ";
    cin >> n;

    if (n < 2) {
        cout << "Invalid input. Array must have at least 2 elements." << endl;
        return 1; // Exit with an error code
    }

    vector<int> arr(n);
    cout << "Enter elements in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = INT_MIN, secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "No second largest element found (all elements may be the same)." << endl;
    } else {
        cout << "Second largest element: " << secondLargest << endl;
    }

    return 0;
}
