#include<iostream>
using namespace std;

class String{
    private:
    char *ptr;
    int len;
    public:
    String():ptr(nullptr),len(0){
        cout<<"defaul const"<<endl;
    }
    String(char *s){
        len=strlen(s);
        ptr=new char[len+1];
        strcpy(ptr,s);

    }
    String(const String &obj){
        len=obj.len;
        ptr=new char[len+1];
        strcpy(ptr,obj.ptr);

    }

    String &operator=(const String &other ){
        if(this!=&other){
            len=other.len;
            delete []ptr;
            ptr=new char[len+1];
            strcpy(ptr,other.ptr);

        }
        return *this;
    }
    void print(){
        
        cout<<ptr<<endl;
        cout<<len<<endl;
    }
    ~String(){
        delete[] ptr;
    }

};

int main(){

    String s1("Saunvid");
    s1.print();
    String s2=s1;
    s2=s1;
    String s3=mo
}