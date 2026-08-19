// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

/*
normal format
1 2 3  0  1
4 5 6  2  3
7 8 9  4  5
6 7 8  9  1
0 1 2  3  4

In row major format:
1 2 3 0 1, 4 5 6 2 3, 7 8 9 4 5,6 7 8 9 1, 0 1 2 3 4

3x3 kernel filter
0 1 0
1 2 1 
0 1 0

In row major format:
0 1 0, 1 2 1, 0 1 0

formula to access index in row major:
i*col+j
where i= current row index
col = number of columns
j= current column index
row major
1 2 3 4 5 6

*/

class Image{
    private:
    int height;
    int width;
    int* data;

    public:
    Image(int h, int w, int* a): height(h), width(w), data(a){
        cout<<"constructor created"<<endl;
    }

    int get(int i, int j, int width, int* ptr){
        return ptr[i*width+j];

    }

    void print(){
        for(int i=0; i<height; i++){
            for(int j=0; j<width; j++){
                cout<<" "<< data[i*width+j];

            }
            cout<<endl;
            
        }
    }

    void convolution(int kh, int kw, int*kptr, Image& outImage){

        for(int r=0; r<height; r++){
            for(int c=0; c<width; c++){

                int pixel=0;
                for(int krow=0; krow<kh; krow++){
                    for(int kcol=0; kcol<kw; kcol++){
                        int curRow= r+krow - (kh/ 2);
                        int curCol= c + kcol - (kw /2 );
                        if(curRow == -1 || curCol == -1 || curRow >=height || curCol>= width ){
                            continue;
                        }
                        int ImageVal=get(curRow, curCol, width, data );
                        int kernelVal=get(krow, kcol,kw, kptr );
                        pixel+=(ImageVal*kernelVal);

                    }
                }
                outImage.data[r*width+c]=pixel;
            }
        }



    }

    
    ~Image(){
        height=0;
        width=0;
        data=nullptr;
    }



};



int main() {
    // Write C++ code here
    int a[9]={
        1, 2, 3,
        4, 5, 6,
        7, 8, 9
    };
    int b[9]={0};
    
    Image i1(3,3,a);

    Image i2(3,3,b);

    int kernel[]={
        0,1,0,
        1,2,1,
        0,1,0
    };

    i1.print();

    i1.convolution(3,3,kernel,i2);

    cout<<"------------"<<endl;

    i2.print();

    
    

    return 0;
}