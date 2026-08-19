#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
    int arr[100];
    int res[100]=FillArray(arr);
    for(int i=0;i<sizeof(res);i++){
        printf("%d",res[i]);
    }


}

int FillArray(int arr[]){
    srand(time(0));
    for(int i=0;i<sizeof(arr);i++){
        arr[i]= rand()%100;

    }
    return arr;
}