#include<iostream>
using namespace std;
#include<vector>

using namespace std;

int main(){
    vector<int> v; //vector creation
    v.push_back(10); // Add elements to the vector // first element 
    v.push_back(20);  // Second element
    v.push_back(30); // Third Element

    cout<< "First Element: "<<v[0]<<endl;   //access first element

    v[0]=51;   // modify first element
    cout<<"New Value of First Element " <<v[0] <<endl;

    for(int x:v){
        cout<<x <<" ";
    }cout<<endl;
    
// Remove the last element
v.pop_back();

// vector size
cout<<" Vector Size: "<<v.size()<<endl;

//add new elements in array
v.push_back(50);
v.push_back(6);

//
for(int i=0 ;i <v.size() ; i++){
    cout<<v[i]<<" ";
}
cout<<endl;

// print the element in vector in reverse order 
for(int i=0 ; i<v.size() ; i++){
    cout<<v[v.size()-i-1]<<" ";
}

cout<<endl;

// using range-based loop
for(int x: v ){
    cout<<x<<" ";
}

// using iterators
cout<<endl;

for(auto it=v.begin() ; it!=v.end() ; ++it){
    cout<< *it<<" ";
}

    return 0;
}
