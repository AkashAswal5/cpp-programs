// Check if a given element exists in an array. 

#include <iostream> 
using namespace std; 
 
bool elementExists(int arr[], int n, int element) { 
    for (int i = 0; i < n; i++) { 
        if (arr[i] == element) { 
            return true; 
        } 
    } 
    return false; 
} 
 
int main() { 
    int n, element; 
    cout << "Enter the number of elements: "; 
    cin >> n; 
     
    int arr[n]; 
    cout << "Enter the elements of the array: "; 
    for (int i = 0; i < n; i++) { 
        cin >> arr[i]; 
    } 
     
    cout << "Enter the element to search for: "; 
    cin >> element; 
     
    if (elementExists(arr, n, element)) { 
        cout << "Element found!" << endl; 
    } else { 
        cout << "Element not found!" << endl; 
    } 
     
    return 0; 
}
