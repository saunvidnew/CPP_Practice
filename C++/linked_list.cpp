#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;

    Node(int d){
        data=d;
        next=nullptr;

    }


};

class LinkedList{
    private:
        Node *head;
    
    public:
        LinkedList(){
            head=nullptr;


        }

        void push_front(int val){
           


        }

};