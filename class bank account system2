#include<iostream>
using namespace std;
#include<string>

class BankAccount{
    private:
    int accountNumber;
    string accountHolderName;
    double balance;
public:
    
    BankAccount(int accNum, string accHolder , double bal){
        accountNumber=accNum;
        accountHolderName=accHolder;
        balance=bal;
    }

    int deposit(double amount){
        balance +=amount;
        cout<<"Balance : "<<balance <<endl;
        }
    int  withdraw(double amount){
        if(amount<=balance){
            balance-=amount;
            cout<<"Withdrew: "<<amount<<endl;
            cout<<"Balance remaining: "<<balance<<endl;
        }
        else {
            cout<<"Not Sufficient Balance"<<endl;
        }
    } 
    int display()  {
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Account Holder: "<<accountHolderName<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};

int main(){
    BankAccount account(123456,"John ",7000);
    account.display();
   cout<<endl;
   account.deposit(1000);

cout<<endl;
account.withdraw(10000);

cout<<endl;
account.withdraw(8000);

cout<<endl;

account.display();

return 0;

}
