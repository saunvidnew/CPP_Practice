#include <iostream>
using namespace std;

int *print(){
    int *stack_var=new int;
    *stack_var=100;
    return stack_var;
}

int main(){

    int *int_ptr;

    int_ptr=print();
    cout <<*int_ptr;
    

}