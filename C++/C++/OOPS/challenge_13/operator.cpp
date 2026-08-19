#include<iostream>
#include<string>
using namespace std;

class Account{
    private:
        int number;
        string name;
    public:

        Account(){
            number=0;
            name="None";

        }
        
        void balance(){
            cout<<"The balance for account is empty"<<endl;

        }

        ~Account(){

        }

    


};

class SavingsAccount: 
public Account{
    public:
        void balance(){
            cout<<"The balance for savings account is empty"<<endl;
        }


};
class Base {
public:
    virtual void func() const { cout << "Base func\n"; }
};

class Derived : public Base {
public:
    void func() { cout << "Derived func\n"; }
};



int main(){
    // Account *ptr1=new SavingsAccount();
    // ptr1->balance();
    // delete ptr1;
    Base* obj = new Derived();
    obj->func();  
}
