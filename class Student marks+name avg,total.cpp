#include<iostream>
using namespace std;
#include<string>

class Student{
    private:
    string name;
    int marks[3];

public:
   Student(string studentName , int m1, int m2, int m3){
    name=studentName;
    marks[0]=m1;
    marks[1]=m2;
    marks[2]=m3;
   }

    int calculateTotal(){
        return marks[0]+marks[1]+marks[2];
    }
 float calculateAverage(){
    return calculateTotal()/3.0;
 }
 void displayDetails(){
    cout<<"Student Name: "<<name<<endl;
    cout<<"Total marks: "<< calculateTotal() <<endl;
    cout<<"Average Marks: "<<calculateAverage()<<endl;
 }
};

int main(){
    Student student1("Ak" , 89 , 88 , 95);

//display student Details
     student1.displayDetails();

    return 0;
}


