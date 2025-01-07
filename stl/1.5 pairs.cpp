
// count Occurrences of pair
// Problem: You are given a list of pairs and need to count how many times a specific pair appears.

#include<iostream>
#include<utility>
#include<vector>
using namespace std;
int main(){
    vector<pair<int,int>> v={{1,2},{2,5},{4,6},{1,2},{7,15},{1,2},{2,5},{1,2}};
    pair<int,int> target = {1,2};  // the pair we want to count

    int count=0; // variable to store the count

    for(int i=0 ; i<v.size(); i++){
        if(v[i]==target){
            count++;
        }
    }
cout<<"Count of "<< "("<<target.first<<","<<target.second<<") : "<< count<<endl;
    return 0;
}
