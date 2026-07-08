#include <iostream>
extern int s_variable;// referencing the s_variable in another file through linking 
void func(){
    
}
int main(){
    std :: cout << s_variable << std :: endl;
}