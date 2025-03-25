#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int *ptr = &num;
    int **ptr2 = &ptr;  // Pointer to pointer


    cout<<"&num: "<<&num;    cout<<" num: "<<num<<endl; 
    cout<<"&ptr: "<<&ptr;    cout<<" ptr: "<<ptr<<endl; 
    cout<<"&ptr2: "<<&ptr2;  cout<<" ptr2: "<<ptr2<<endl<<endl;
    
    cout << "*&ptr: " << *&ptr << endl;   // Gives ptr
    cout << "*ptr2: " << *ptr2 << endl;   // Also gives ptr (same as *&ptr)
    cout << "**ptr2: " << **ptr2 << endl; // Gives 10


    return 0;
}
