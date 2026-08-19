#include<iostream>
#include<vector>
using namespace std;

vector<int> res;

int factorial(int n){
    if(n==1){
        return 1;
    }
    return n*factorial(n-1);
    
}
int main(){
    int res=factorial(3);
    cout<<res<<endl;

}