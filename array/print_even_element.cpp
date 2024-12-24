//     Find the Even Numbers in an Array 
 
#include <iostream> 
using namespace std; 
 
void printEvenNumbers(int arr[], int n) { 
    cout << "Even numbers: "; 
    for (int i = 0; i < n; i++) { 
        if (arr[i] % 2 == 0) { 
            cout << arr[i] << " "; 
        } 
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
     
    printEvenNumbers(arr, n); 
    return 0; 
} 
