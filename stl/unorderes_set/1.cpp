#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>  // part of stl 

// unordered_set implemented using hash table
// Time Complexity --> O(1)   worst case --> O(n)


/*    set vs unordered_set

set --> Key are stored in ordered fashion
unorderes_set --> keys are stored in unordered fashion

set--> is internally implemented as RED BLACK tree
unordered_set --> is internally implemented HASHING

        time complexity
set -->O(log n)
unordered_set --> O(1);
*/

/*
 Unordered_set does not have duplicates keys
*/


using namespace std;

int main(){ 
 unordered_set<int>s;
 s.insert(10);
 s.insert(5);
 s.insert(2);
 s.insert(8);
 s.insert(8);
  s.insert(8);

for(auto it=s.begin() ; it!=s.end(); it++){
  cout<<(*it)<<endl;
    
}


cout<<"number of element:" <<s.size()<<endl;
// s.clear();

// cout<<"number of element:" <<s.size()<<endl;

int key=2;
if(s.find(key)==s.end()){
    cout<<"key not found"<<endl;
}
else{
    cout<<"key found"<<endl;
}

    return 0;
}
