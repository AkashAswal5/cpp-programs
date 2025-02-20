/*
19.	Find the Number of Unique Elements in an Array:
Description: Count the distinct elements in an array.
Input: [1, 2, 2, 3, 4, 4, 5]
output: 5
*/

#include <iostream>
using namespace std;
#include <set> // Include set Library

int uniqueelement(int arr[], int n)
{
  set<int> uniqueelements; // set automatically stores unique values
  for (int i = 0; i < n; i++)
  {
    uniqueelements.insert(arr[i]);
  }

  return uniqueelements.size(); // return the count of unique elements
}

int main()
{
  int n;
  cout << "Enter how many number to Enter: ";
  cin >> n;

  int arr[n];
  cout << "Enter number of element in an array: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  cout << "Numnber of Unique elements: " << uniqueelement(arr, n) << endl;

  return 0;
}
