#include <iostream>
#include <vector>
#include <limits.h> // For INT_MIN

int main() {
    // Initialize the array
    std::vector<int> arr = {12, 35, 1, 10, 34, 1};
    
    int largest = INT_MIN;       // Initialize largest to the smallest integer
    int second_largest = INT_MIN; // Initialize second largest to the smallest integer

    // First pass to find the largest element
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > largest) {
            largest = arr[i]; // Update largest
        }
    }

    // Second pass to find the second largest element
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > second_largest && arr[i] < largest) {
            second_largest = arr[i]; // Update second largest
        }
    }

    // Check if second_largest was updated
    if (second_largest == INT_MIN) {
        std::cout << "There is no second largest element." << std::endl;
    } else {
        std::cout << "The second largest element is: " << second_largest << std::endl;
    }

    return 0;
}
