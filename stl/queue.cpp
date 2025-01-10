/*
Queue: It operates in a FIFO (First In, First Out) manner, meaning elements are inserted at the back (enqueue) and removed from the front (dequeue).

    Characteristics of a Queue:
FIFO Order: Elements are processed in the order they are added.
Limited Operations: Only supports insertion at the back and removal from the front.
Use Case: Suitable for tasks like scheduling, buffering, or breadth-first search (BFS).
*/

#include <iostream>
#include <queue> // Include the queue header

int main()
{
    std::queue<int> q;

    // Adding elements to the queue
    q.push(10); // Queue: [10]
    q.push(20); // Queue: [10, 20]
    q.push(30); // Queue: [10, 20, 30]

    // Accessing the front and back
    std::cout << "Front: " << q.front() << "\n"; // Output: 10
    std::cout << "Back: " << q.back() << "\n";   // Output: 30

    // Removing elements from the front
    q.pop();                                               // Removes 10; Queue: [20, 30]
    std::cout << "Front after pop: " << q.front() << "\n"; // Output: 20

    // Checking size and emptiness
    std::cout << "Queue size: " << q.size() << "\n";                       // Output: 2
    std::cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << "\n"; // Output: No

    return 0;
}
