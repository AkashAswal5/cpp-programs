// example of Encapsulation

#include<iostream>
using namespace std;
#include<string>

class Employee{
    private:
    string name;
    int id;

    public:
    //public method to access the private data
    void setName(string empName){
        name=empName;
    }
    void setId(int empId){
        id=empId;
    }
    string getName(){
        return name;
    }

    int getId(){
        return id;
    }
};

int main(){
    Employee emp;
    emp.setName("AK");
    emp.setId(101);

cout<<"Employee Name: "<<emp.getName() <<endl;
cout<<"Employee ID: "<<emp.getId()<<endl;
    return 0;
}
