#include <iostream> 
using namespace std; 
 
int removeDuplicates(int arr[], int n) { 
    if (n == 0) return 0; 
     
    int newIndex = 1;  // First element is always unique 
     
    for (int i = 1; i < n; i++) { 
        bool isDuplicate = false; 
        for (int j = 0; j < newIndex; j++) { 
            if (arr[i] == arr[j]) { 
                isDuplicate = true; 
                break; 
            } 
        } 
        if (!isDuplicate) { 
            arr[newIndex] = arr[i]; 
            newIndex++; 
        } 
    } 
     
    return newIndex; 
} 
 
int main() { 
    int n; 
    cout << "Enter the number of elements: "; 
    cin >> n; 
     
    int arr[n]; 
    cout << "Enter the elements of the array: "; 
    for (int i = 0; i < n; i++) { 
        cin >> arr[i]; 
    } 
     
    n = removeDuplicates(arr, n); 
    cout << "Array after removing duplicates: "; 
    for (int i = 0; i < n; i++) { 
        cout << arr[i] << " "; 
    } 
    cout << endl; 
    return 0; 
} 
