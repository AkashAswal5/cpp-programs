#include<iostream>
#include<string>
using namespace std;



    class teacher{
        // properties 
        // or attribute
       public:
        string name;
        string dept;
        string subject;
        double salary;


        //method or member functions
        void changedept(string newdept){
            dept=newdept ;
        }

        
    };

int main(){
    teacher t1;
    t1.name="AK";
    t1.subject="C++";
    t1.dept="comp science ";
    t1.salary= 2500;

cout<<t1.name<<endl ;

    return 0;
}
