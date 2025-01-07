// Find the largest pair
//Problem: You are given a list of pairs, and you need to find the pair that has the largest sum of its elements.
#include<iostream>
using namespace std;
#include<utility>
#include<vector>
int main(){

vector<pair<int,int>>v{{1,5} , {2,3} , {4,7}}; //vector of pairs
pair<int,int> largest =v[0];  // start with the first pair as largest

for(int i=0 ; i<v.size(); i++){
if(v[i].first + v[i].second > largest.first + largest.second){
    largest=v[i];
}
}
cout<<"largest pair: (" << largest.first<<", "<<largest.second<< ")" <<endl;

    return 0;
}
