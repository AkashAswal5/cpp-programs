
// Pair with Maximum Product
// Find the pair that has the maximum product of its elements.

#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
int main(){
    vector<pair<int,int>>v={{1,2},{4,6}, {7,6},{8,9}};
    pair<int,int>maxpair=v[0];
    int maxproduct=v[0].first*v[0].second;

    for(int i=0 ; i<v.size() ; i++){
       int product= v[i].first * v[i].second;
        if( product > maxproduct ){
            maxproduct=product;
            maxpair=v[i];
        }
    }

     // Output the pair with the maximum product
    cout << "Pair with maximum product: (" << maxpair.first << ", " << maxpair.second << ")" << endl;
    return 0;
}
