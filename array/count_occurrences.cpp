// Count the Number of Occurrences of an Element 
//  Count the number of times a specific element appears in an array. 

#include <iostream>
#include <vector> // For using dynamic arrays
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input. The number of elements must be greater than 0." << endl;
        return 1; // Exit with error code
    }

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int element;
    cout << "Enter the element to count: ";
    cin >> element;

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            count++;
        }
    }

    cout << "Element " << element << " occurs " << count << " times." << endl;

    return 0;
}
