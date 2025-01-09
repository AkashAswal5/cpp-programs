/*
     Features of deque:
Double-ended operations: You can insert or remove elements from both ends.
Dynamic sizing: Unlike arrays, it can grow dynamically without manual memory management.
Random access: Provides constant-time access to any element.
    */
#include <deque>
#include <iostream>

int main() {
    std::deque<int> dq;

    // Adding elements to the deque
    dq.push_back(10);  // Insert at the back
    dq.push_front(20); // Insert at the front

    // Accessing elements
    std::cout << "Front: " << dq.front() << "\n";
    std::cout << "Back: " << dq.back() << "\n";

    // Removing elements
    dq.pop_front(); // Remove from the front
    dq.pop_back();  // Remove from the back

    return 0;
}
