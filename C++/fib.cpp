#include<iostream>
#include<vector>
using namespace std;

vector<int> res;

int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int x=fib(n-1);
    int y=fib(n-2);
    res.push_back(x+y);
    return x+y;
}
int main(){
    fib(4);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<endl;
    }

}