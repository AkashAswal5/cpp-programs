/*
since pointers store addresses, we can modify them using pass by reference.
*/

#include <iostream>
using namespace std;

void updatePointer(int *&ptr)
{              // Pass Pointer By reference
    *ptr = 20; // Modify value at the address
}
int main()
{

    int num = 10;
    int *ptr = &num;
    updatePointer(ptr);
    cout<<"Updated value: "<< num<<endl; // Outputs: Updated Value: 20
    return 0;
}

/*
        Key Takeaways
✔ Pass by value → Creates a copy (original variable remains unchanged).
✔ Pass by reference (&) → Directly modifies the original variable.
✔ Useful for efficiency → Avoids copying large data structures like arrays, vectors.
✔ Can also be used with pointers for even more flexibility. 
*/
