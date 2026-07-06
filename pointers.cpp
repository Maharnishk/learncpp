//pointers are variables holding a memory address
#include <iostream>
int main() {
    int var = 8;
    //void* ptr = NULL;// 0 - memory address
    int* ptr = &var;
    *ptr=10;
    std :: cout << var << std :: endl;
    //in case  if we are creating a memeory block of our need in heap
    char* buffer = new char[8];
    memset(buffer,0,8);
    char** ptr = &buffer;//double pointer ( pointer -> pointer )

    delete[] buffer;
}