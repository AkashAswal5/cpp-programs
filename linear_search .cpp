// linear searching c++

#include<iostream>
using namespace std;
int main(){
    cout<<"enter how many number to insert in array ";
   int n ;
   cin>>n ;

cout<<"enter " << n <<" number ";
   int arr[n];

   for (int i= 0 ; i<n ; i++){
    cin>>arr[i];
   }


   int key ;
   bool found;

   cout<<" enter number to search in a array above : ";
   cin>>key ;

   for (int i=0 ; i<n ; i++){

    if (arr[i]==key){
        cout<<"key found at " <<i+1 <<" index ";
        found=true;
        break;
        
    }
   }

     if(!found){
        cout<<" key not found "<<endl;
    }

  

    


    return 0;
}
