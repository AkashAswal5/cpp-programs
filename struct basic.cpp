#include<iostream>
using namespace std;

struct student{
    int roll;
    string name;
    int age;

    void studentDetails(){
        cout<<"name is: "<<name<<endl;
        cout<<"Age is: "<<age<<endl;
        cout<<"Roll no. :"<<roll<<endl;
    }
};

int main(){
    //struct student prince;
    student prince;
    prince.age=21;
    prince.name="prince";
    prince.roll=44;

struct student prateek={21,"prateek", 20};
// student prateek={21,"prateek", 20};
cout<<endl;

prateek.studentDetails();
cout<<endl;
prince.studentDetails();
    


    return 0;
}
