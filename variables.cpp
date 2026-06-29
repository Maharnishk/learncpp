//USED TO MANIPULATE DATA--VARIABLES USED TO STORE DATA
#include <iostream>
int main(){
    char a = 'w';//assignes a charcater and also a number---1byte 
    std :: cout << a << std :: endl;
    float dec = 32.45f;//used to assign a decimal---4bytes
    std :: cout << dec  << std :: endl;
    double dec2 = 22.56;//used to assign a decimal ----8bytes
    std :: cout << dec2  << std :: endl;
    bool variable3= true;//used as true or false (1 or 0)----1byte
    std :: cout << variable3 << std :: endl;

    //to check the size of a data types
    std::cout << sizeof(float)<< std :: endl;

    
    int variable = 8; // 4 bytes(32bit) --  variable can store upto -2billion--+2billion
    std :: cout << variable  << std :: endl;
    unsigned int variable2 = 8;
    std :: cout << variable2  << std :: endl;

}