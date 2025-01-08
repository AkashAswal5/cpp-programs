/*
list is a container in the STL,
 that implements a doubly linked list.

  Unlike vector, which provides a dynamic array,

  a list allows efficient insertion and deletion of elements at
   both ends or in the middle of the container.



   Key Features of list:
Doubly Linked List: Each element is linked to both its previous and next elements.
Efficient Insert/Delete: Fast insertion and deletion at any position (O(1) time for most operations).
No Random Access: Elements cannot be accessed directly using indices like in vector.
*/

#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l; // list Initialization

    /*
     push_back() to add an element at the end.
     push_front() to add an element at the beginning.
     */

    l.push_back(10); // 10
    l.push_back(12); // 10 12
    l.push_back(15); // 10 12 15
    l.push_back(17); // 10 12 15 17

    l.push_front(5); // 5 10 12 15 17
    l.push_front(3); // 3 5 10 12 15 17

    // Using auto with a for loop
    for (auto it = l.begin(); it != l.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    /* Removing Elements
   pop_back()  :to remove the last element.
   pop_front() :to remove the first element.
   remove(value):to remove all elements with the specified value.*/

    l.pop_back();  // 3 5 10 12 15
    l.pop_front(); //  5 10 12 15
    l.remove(12);  // 5 10 15

    /* Sorting a List */
    // sort() : function to sort a list in ascending order.
    l.sort(); // 5 10 15

    /* Reversing a List */
    //  reverse() : function to reverse the order of elements.
    l.reverse(); // 15 10 5

    list<int> l2 = {4, 14, 15, 5, 4, 12};

    // sort both lists
    l.sort();
    l2.sort();

    l.merge(l2); // Merges l2 into l (both should be sorted) // 4 14 15 10 5 15 5 4 12
                 // l2.merge(l);

    /*
    clear()	Removes all elements from the list.
    empty()	Checks if the list is empty.
    size()	Returns the number of elements in the list.
    */

    // Using auto with a for loop
    for (auto it = l.begin(); it != l.end(); ++it)
    {
        cout << *it << " ";
    }

    return 0;
}
