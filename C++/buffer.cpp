#include<iostream>
using namespace std;
// [1][2][3]
class Buffer{
    int *buffer;
    int capacity;
    int count;
    int front;
    int end;

    public:
    Buffer(int c){
        capacity=c;
        buffer=new int[capacity];
        count=0;
        front=0;
        end=0;
    }

    void write(int val){
        if(count==capacity){
            cout<<"Buffer is full"<<endl;
            return;
        }
        buffer[end]=val;
        end=(end+1)%capacity;
        count+=1;


    }
    int read(){
        if(count==0){
            cout<<"Buffer is empty"<<endl;
            return 0;
        }
        int res=buffer[front];
        front=(front+1)%capacity;
        count-=1;
        return res;
    }
    void print(){
        for(int i=0; i<count;i++){
            cout<<buffer[i]<<endl;
        }
    }

    ~Buffer(){
        delete[] buffer;
    }

};

int main(){
    Buffer b1(3);
    b1.write(1);
    b1.write(2);
    b1.write(3);
    b1.print();
    cout<< b1.read()<<endl;


}