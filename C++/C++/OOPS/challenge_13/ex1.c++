#include<iostream>
using namespace std;

class BankAccount{
    private:
        int accountNumber;
        int balance;

    public:
        BankAccount(int accno, int balance){
            accountNumber=accno;
            balance=balance;
        }

        void deposit(int amt){
            balance+=amt;
        }

        ~BankAccount(){};

};