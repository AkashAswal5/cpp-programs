#include <iostream>
using namespace std;

void descendingSortArray(int len, int* arr) {
    int i, j, temp;
    for (i = 0; i < len - 1; i++) {
        for (j = i + 1; j < len; j++) {
            if (arr[i] < arr[j]) {  // Swap if the current element is smaller
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int len;
    cout << "Enter the number of elements: ";
    cin >> len;

    int arr[len];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }

    descendingSortArray(len, arr);

    cout << "Sorted array in descending order:\n";
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
