/*
    Insert and Retrieve from unordered_map

Problem:
Create an unordered_map<int, string> to store roll numbers and student names. 
Insert 5 student records and retrieve a name using a roll number.

*/

#include<iostream>
#include<unordered_map>
#include<bits/stdc++.h>

using namespace std;

int main()
{ 
    // declare unordered_map
    unordered_map<int , string>students;

     // inserting values
     // keys          values
     students[101]="Alice";
     students[102]="Bob";
     students[103]="charlie";
     students[104]="David";
     students[105]="Eve"; 

     // Retrieve a value
     int rollNumber=101;

     if(students.find(rollNumber)!=students.end()){
        cout<<"student with roll number "<<rollNumber<<": "<<students[rollNumber]<<endl; 
     }

     else{
        cout<<"student not found! "<<endl;
     }


    return 0;
}
