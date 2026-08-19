#include<iostream>
#include<vector>
using namespace std;

class Stack{
    private:
    vector<int> *ptr;

    public:
    Stack(): ptr(nullptr){
        cout<<"dafault constructor"<<endl;

    }
    Stack(vector<int> *a){
        ptr=new vector<int>(*a);
    }
    void print(){
        for(int i=0;i<ptr->size();i++){
            cout<<(*ptr)[i];
        }
        cout<<"\n";

    }


};
int main(){
    vector<int> *v=new vector<int>({1,2,3});
    Stack s1(v);
    s1.print();
}
