/*
10.	Sum of perfect squares in a range:  
Description: Calculate the sum of all perfect squares between two numbers. 
Example: 
Input: 1 to 10 
Output: 1 + 4 + 9 = 14 
*/

#include <iostream>
using namespace std;
int main(){

    int n,m  ,sum=0;
    cout<<"Enter a range of number from where to count sum of  all perfect square ";
    cin>>n>>m;

    if(n<=0 || m<=0 || m<=n){
        cout<<" not a valid exprression";
        return 0;
    }

    if(n>=0 && m>=n){
        for(int i=1 ; i<m ; i++){
            if(i*i>n and i*i<=m){
                sum +=i*i;
            }
            else{
                break;
            }
        }
        cout<<"sum is:"<<sum;
    }
   

    return 0;
}
