/*
            Why Use Pass by Reference?
✔ Modifies the original variable
✔ Efficient for large data structures (e.g., arrays, objects)
✔ Avoids copying large data, reducing memory overhead

*/

#include<iostream>
#include<vector>
using namespace std;

void printVector(const vector<int> &v){ 
    for(int num:v){
        num=num*2;
        cout<<num<<" ";       
    }cout<<endl;
}

int main(){
    vector<int> nums={1,2,3,4,5};
    printVector(nums); // 2 4 6  8 10
    return 0;
}
