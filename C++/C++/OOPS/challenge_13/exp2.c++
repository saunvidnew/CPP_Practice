#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Employee{
protected:
    string name;
    int id;

public:
    Employee(string name, int id){
        this->name=name;
        this->id=id;
    }
    virtual double calculateSalary(){
        return 0;
    };

    virtual ~Employee() {}; 


};

class FullTimeEmployee: public Employee{
protected:
    double monthlySalary;
public:
    FullTimeEmployee(string name, int id, double ms): Employee(name, id) {
        this->monthlySalary=ms;

    }
    double calculateSalary() override{
        return monthlySalary;
    }
    ~FullTimeEmployee(){};
};

class PartTimeEmployee: public Employee{
protected:
    double hourlyRate;
    int hoursWorked;
public:
    PartTimeEmployee(string name, int id, double hr, int hw): Employee(name, id){
        this->hourlyRate=hr;
        this->hoursWorked=hw;
    }
    double calculateSalary() override{
        return hourlyRate*hoursWorked;
    }
    ~PartTimeEmployee(){};

};

int main(){
    vector<Employee*> employees;

    employees.push_back(new FullTimeEmployee("saunvid", 0, 5000));
    employees.push_back(new FullTimeEmployee("Balu", 1, 5500));
    employees.push_back(new PartTimeEmployee("harsha", 2,20, 40 ));
    

    for(auto employee: employees){
        cout << employee->calculateSalary()<<endl;
        delete employee;
    }

    


}