#include<iostream>
using namespace std;
//1011
int clear_i(int n, int i){
    int res;
    res=1<<i;
    res=~res;
    return (n&res);


}
//1100
//1011
//1000

int right_m(int n){
    int res=n-1;
    return n&res;


}

int main(){

    cout<<clear_i(13,2)<<endl;
    cout<<right_m(12)<<endl;



}