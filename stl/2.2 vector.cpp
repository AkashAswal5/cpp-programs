#include <iostream>
using namespace std;
#include <vector>
int main()
{
    vector<int> v; // Declare a vector of int
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    /*     Accessing Elements
    Use indexing or the at() function.*/

    cout << v[2] << endl;    // Access using index
    cout << v.at(2) << endl; // Access using at()

    /*    Removing Elements
    Use pop_back() to remove the last element.
    Use erase() to remove specific elements.*/

    v.push_back(40);
    v.push_back(50); // previous array 1 2 3 40 50

    v.pop_back();           // remove 50
    v.erase(v.begin() + 1); // removes the element at the index 1 (2)

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " "; // output array 1 3 40
    }
    cout << endl;
    /*      Size and Capacity
    size(): Returns the number of elements.
    capacity(): Returns the allocated capacity.
    resize(): Changes the size of the vector.
    */

    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    v.resize(5, 10); // resize to 5, fill new element with 10

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " "; // 1 3 40 10 10
    }
    cout << endl;

    /*    Clearing and Checking
    clear(): Removes all elements.
    empty(): Checks if the vector is empty.
    */
    v.clear(); // remove all elements

    if (v.empty())
    {
        cout << " Vector is empty! " << endl;
    }
    return 0;
}

/*
      Advantages of Vectors
1) Automatically manages memory.
2) Provides many helpful functions for dynamic data handling.
3) Allows random access and efficient insertion/deletion.
     Disadvantages
1) Slower than arrays for fixed-size data.
2) Frequent resizing can be computationally expensive.

    Common Use Cases of Vectors
1) Dynamic arrays with unknown sizes.
2) Storing collections of objects (e.g., list of students or scores).
3) Using vectors in algorithms requiring flexible resizing.
*/
