/* 
    *
   **
  ***
 ****
*****
       */

#include<iostream>
using namespace std;
int main(){

int n=5;
for(int i=1 ; i<=5 ; i++){
    for(int j=i; j<n ; j++){
        cout<<" ";
    }
  for(int k=1; k<=i;k++){
    cout<<"*";
  }
    cout<<endl;

}

    return 0;
}
