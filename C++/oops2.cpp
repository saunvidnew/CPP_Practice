// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <memory>
#include <string>
using namespace std;

class Human{
    private:
    string name;
    int age;
    public:
    Human(string n, int a): name(n), age(a){ 
        
    }
    virtual void print(){
        cout<<"My name is "<<name<<" and my age is "<<age<<endl;
    }
   
};

class Student: public Human{
    protected:
    string school;
   
    public:
    Student(string n, int a, string s): Human(n,a), school(s){
        
    }
    void print() override{
        cout<<"My name is "<<name<<" and my age is "<<age<<" and my school is " <<school<< endl;
    }
    
};

int main() {
    unique_ptr<Human> up= make_unique<Student>("saunvid", 26, "VVHS");
    up->print();
    
    Human *ptr=new Student("saunvid", 26, "VVHS");
    ptr->print();
    delete ptr;

    return 0;
}