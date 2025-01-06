// pairs

#include <iostream>
using namespace std;
#include <utility> // For std::pair

int main() {
    // Declare a pair of integer and string
  pair<int, string> p1(1, "apple");

    // Accessing the elements of the pair
    cout << "First element: " << p1.first << std::endl;
    cout << "Second element: " << p1.second << std::endl;

    // Modifying elements
    p1.first = 2;
    p1.second = "orange";

    cout << "Modified first element: " << p1.first << std::endl;
    cout << "Modified second element: " << p1.second << std::endl;

    return 0;
}
