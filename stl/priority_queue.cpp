/*
A priority queue in C++ is a container adapter that provides a
way to store elements such that the element with the highest priority
 is always at the front. It is implemented as a max-heap by default,
 meaning the largest element has the highest priority.

Ordering of Elements: By default, the largest element is at the front.

Direct access is only available to the top (highest-priority) element.

*/

#include <iostream>
#include <queue>

int main()
{
    std::priority_queue<int> pq;

    // Adding elements
    pq.push(10);
    pq.push(30);
    pq.push(20);

    // Accessing the top element
    std::cout << "Top element: " << pq.top() << "\n"; // Output: 30

    // Removing the top element
    pq.pop();                                                   // Removes 30
    std::cout << "Top element after pop: " << pq.top() << "\n"; // Output: 20

    // Checking size
    std::cout << "Size of the priority queue: " << pq.size() << "\n"; // Output: 2

    return 0;
}
