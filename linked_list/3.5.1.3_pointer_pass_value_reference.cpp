/*
 A pointer stores the memory address of a variable.
  when we pass a pointer by value, only the address is copied, and changes made inside the function do not affect the original pointer.

However,when we pass a pointer by reference, we allow the function to modify the original


*/

#include <iostream>
using namespace std;

void passbyvalue(int *ptr)
{
    int temp = 20;
    ptr = &temp; // changing local pointer, but it doesn't affect main()
}

void passbyreference(int *&ptr) // passing pointer by reference
{
    int temp = 20;
    ptr = &temp; // Now this affect the original pointer
}

int main()
{

    int num = 10;
    int *ptr = &num;

    passbyvalue(ptr);                           // passsing pointer by value
    cout << " pass by value: " << *ptr << endl; // output: 10 (unchanges)

    passbyreference(ptr);                           // passing pointer by reference
    cout << " Pass By reference: " << *ptr << endl; //  Output: 20 (Updated Value)
    return 0;
}
