#include <iostream>
void increment(int* value){//usage of pointer in func
    (*value)++;
}
void increment2(int& value){//usage of ref in func
    value++;
}

/*u cannot change the ref variable to another later in the program for example 
int a = 7;
itn b = 8;
int& ref = a
ref = b; (u cannot do this )
if u did  so in case u will end up with 
int a = 8; and b = 8; a will be mapped to b's value 
you can also not leave the refereance empty example 
int& ref;(u cannot do this even)
*/
int main(){
    int a = 5;
    increment(&a);
    increment2(a);
    //int& ref = a;//alias
    std :: cout << a << std ::endl;
}