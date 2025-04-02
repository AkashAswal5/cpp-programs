#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include<unordered_map>

int main(){
    /* Declaration
    unordered_map<keyType, ValueType> mapname;   
    
KeyType → The type of the keys (e.g., int, string, char).
ValueType → The type of the values associated with keys.

    */
 unordered_map<string,int>umap;
  
 umap["hello"]=11;
 umap["world"]=121;
 umap["how"]=1331;

 // data store in unorder way --> depends on compiler, how it is using hash function

 // for(auto x:umap){
//     cout<<x.first<<" "<<x.second<<endl;
// }

for(auto itr=umap.begin(); itr!=umap.end(); itr++){
    cout<<itr->first<<" "<<itr->second<<endl;
}
  string key="world";

//   if(umap.find(key)!=umap.end()){
//     cout<<"key  found"<<endl;
//   }
//   else{
//     cout<<"key not found";
//   }

if(umap.find(key)!=umap.end()){
   auto temp=umap.find(key);
   cout<<"key is : "<<temp->first<<endl;
   cout<<"value is: "<<temp->second<<endl;
  }

  umap.insert(make_pair("are",1332));

  key="are";
  umap.erase(key);  // erase function 

  for(auto itr=umap.begin(); itr!=umap.end() ; itr++){
    cout<<itr->first<<" "<<itr->second<<endl;
  }
  // Size function
cout<<"size : "<<umap.size()<<endl;

int arr[]={7,56,9,7,62,6,47,12,2,14,6,79,66,4,79,66,47,62,9,7};
 int size1=sizeof(arr)/ sizeof(arr[0]);

 cout<<"TOtal element in array: "<<size1<<endl;
unordered_map<int,int>umaped;        // Declare unorder map

 for( int i=0 ; i<size1; i++){
    int key=arr[i];
    umaped[key]++;

 }

 for(auto itr=umaped.begin(); itr!=umaped.end() ; itr++){
    cout<<itr->first<<" "<<itr->second<<endl;
  }

    return 0;
}
