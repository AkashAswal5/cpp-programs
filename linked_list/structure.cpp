// structure

#include <iostream>
using namespace std;

    struct student
    {
        int roll;
        string name;
        int age;

        void studentdetail(){
            cout<<"name is : "<<name<<endl;
            cout<<"age is : "<<age<<endl;
            cout<<"roll is : "<<roll<<endl;
        }
    };

    
int main()
{

    student AK;
    AK.age=23;
    AK.name="AKA";
    AK.roll=55;

    student shiv={21,"shiv",22};

AK.studentdetail();
cout<<endl;
shiv.studentdetail();
    return 0;
}
