//Print the elements of the array in reverse order without modifying the original array.

#include <iostream> 
using namespace std; 
 
void printReverse(int arr[], int n) { 
    cout << "Array in reverse order: "; 
    for (int i = n - 1; i >= 0; i--) { 
        cout << arr[i] << " "; 
    } 
    cout << endl; 
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
     
    printReverse(arr, n); 
    return 0; 
}
