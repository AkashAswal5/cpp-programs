/*
       Iterate and Print
Problem:
Create an unordered_map<string, int> that stores country names as keys and their population as values.
 Print all key-value pairs.
*/
#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
      
    unordered_map<string,int>popu;
    popu={{"india",100000} ,{"china",10000000000}, {"usa",10000}};

    for(auto itr=popu.begin(); itr!=popu.end(); itr++ ){
        cout<<itr->first<<" ->"<<itr->second<<endl;
    }

    return 0;
}
