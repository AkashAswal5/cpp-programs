#include<iostream>
using namespace std;
#include<string>

class Rectangle{
   
   public:
    int length;
    int breadth;

    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }


};

int main(){
    Rectangle rect;
int length , breadth;
cout<<"enter length and breadth: ";
cin>>length>>breadth;
rect.length=length;
rect.breadth=breadth;

cout<<"Area: "<<rect.area()<<endl;
cout<<"perimenter: "<<rect.perimeter()<<endl;

    return 0;
}
