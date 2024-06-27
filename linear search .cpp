#include<iostream>
using namespace std;

int main() {
    // Linear search

    int arr[6] = {12, 18, 20, 42, 8, 10};
    int key = 8;
    bool found = false;

    for (int i = 0; i < 6; i++) {
        if (key == arr[i]) {
            cout << "Found at index " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Not found" << endl;
    }

    return 0;
}
