#include <iostream>
#include <vector>
using namespace std;

int* multiply(int *arr1,int *arr2,int size1,int size2){
    int size3=size1*size2;
    int *arr3=new int[size3];
    int k=0;
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            arr3[k]=arr1[i]*arr2[j];
            k+=1;
        }

    }
    return arr3;



}

void values(int *arr1, int* arr2, int size1, int size2){
    cout << "Enter values for array 1"<<endl;
    for(int i=0;i<size1;i++){
        int x;
        cin >>x;
        arr1[i]=x;
    }
    cout << "Enter values for array 2"<<endl;
    for(int i=0;i<size2;i++){
        int x;
        cin >>x;
        arr2[i]=x;
    }
}


int main(){
    int size1=0;
    int size2=0;
    cout << "Enter size of first array"<<endl;
    cin>>size1;
    cout << "Enter size of second array"<<endl;
    cin >> size2;
    int *arr1= new int[size1];
    int *arr2=new int[size2];
    values(arr1,arr2,size1,size2);
    int *result=multiply(arr1,arr2,size1,size2);

    int size3=size1*size2;
    cout <<"Results are: "<<endl;
    for(int k=0;k<size3;k++){
        cout << result[k];
    }

    delete[] arr1;
    delete[] arr2;
    delete[] result;




}

