#include <iostream>
int main(){
    //stack
    int example[5];
    example[0];//indexing
    std :: cout << example[2]<< std ::endl;
    for (int i=0;i <5;i++){
        example[i]=32;
        std ::cout << example[i]<< std::endl;
    }
    //heap 
    int* another = new int[7];
    for (int i=0;i < 7;i++){
        another[i]=22;
        std ::cout << another[i]<< std::endl;
    }
    delete[] another;

    
     //size of 
     int a[5];
     int count = sizeof(a)/sizeof(int);
     std ::cout << count<< std ::endl;

     //better way of writing the abouve statements
    static const int examplesize = 56;
    int hello[examplesize];
    std :: cout<< examplesize << std:: endl;


    }
