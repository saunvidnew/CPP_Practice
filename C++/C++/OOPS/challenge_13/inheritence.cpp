#include<iostream>
#include<string>
using namespace std;

class Account{
    private:
        string name;
        long number;
        double balance;
    public:
        Account(){
            name="Account name";
            number=0;
            balance=0;
        }

        void deposit(double amount){
            balance+=amount;
            cout<<"Account deposit called with amount: "<<amount<<endl;
        }
        void withdraw(double amount){
            balance-=amount;
            cout<<"Account withdrawed with amount: "<<amount<<endl;
        }
        void current(){
            cout<<"Current balance: "<<balance<<endl;
        }
        void display(string n){
            name=n;
            cout<<"This is: "<<name<<"'s account"<<endl;
        }
};

class SavingAccount : public Account{
    public:
        void display(){
        
            cout<<"This is: "<<"'s savings account"<<endl;

        }

    

};

int main(){

    // Account acc1;
    // acc1.deposit(5000.0);

    // // return 0;

    // SavingAccount sacc1;
    // sacc1.deposit(300.12);
    Account *ptr1=nullptr;
    ptr1=new SavingAccount();

    ptr1->deposit(2000);
    ptr1->withdraw(500);
    ptr1->current();
    ptr1->display("s");

    delete ptr1;


}
