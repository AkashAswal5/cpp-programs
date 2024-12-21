// find the length of longest word in string

#include<iostream>
#include<string>
using namespace std;

int longestwordlength(string str){
    int maxlength=0 , currentlength=0;
    int n=str.length();

    for(int i=0 ; i<n ; i++){
        if(str[i]!=' '){
            currentlength++;
        }
        else{
            if(currentlength>maxlength){
                maxlength=currentlength;
            }
            currentlength=0;
        }
    }
    // to check the last word in the string
    if(currentlength>maxlength){
        maxlength=currentlength;
    }
    return maxlength;
}

int main(){
    string str;
    cout<<"Enter a String: ";
    getline(cin,str);

    cout<<"Length of the lonhgest word: "<<longestwordlength(str)<<endl;
    return 0;
}
