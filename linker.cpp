// linker helps in combining all the obj files created while compilation is done and joining them to give our final output 
//code must go through thesee 2 processes 1-compiling 2- linking

#include <iostream>
/*void Log(const char* message){
    std :: cout << message << std :: endl;
}(instead of this if this func is another file we write aa follows )*/
void Log(const char* message);// now we have to compile both file to gether then they will get linked with each other 

int Mul(int a, int b){
    Log("multiply");
    return a * b;
}
/* here we might get an linking error becuase our entry point is not deifne(genrally entry point would be the main function)
it doesnt ahve to be alwys the main function but it has to have a any entry point regarding the code. 
in the terminal if we find a error code starting with C-then it is a compiler error if the error code is starting with LIN or LNK it is a linker error 
*/
int main(){
std:: cout << Mul(3,4) << std :: endl;
std:: cin.get();
}
//if we add a main function now we dont get any out put but we resolved the linking error 
/*the real catch is that what if have the function in different files like log in saperate file and multiply function in saperate file 
*/

//note : if you type a word static beside function  that tells the linker this function is only realted to this file not to anyother file so the linker ignores
//SYMBOL Linking: having the same function twice or ahving repetative symbols so the compiler falls into a error 
/*
ex-

void Log(const char* message){
    std :: cout << message << std :: endl;
}
    
void Log(const char* message){
    std :: cout << message << std :: endl;
}
    linker will get confused for which log fuction it shoudl use to link to the reequired file 
    
*/