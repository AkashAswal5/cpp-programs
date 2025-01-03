//  Remove Specific Element from Array

#include <iostream>
using namespace std;

int main()
{

    int n, element;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array : ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to remove: ";
    cin >> element;

    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != element)
        {
            arr[index++] = arr[i];
        }
    }
    n = index;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
