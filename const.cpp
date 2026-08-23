#include <iostream>
#include <string>
class entity{
private:
int m_X,m_Y;// if u want to declare evrything ass a pointer not the only one we have to use pointer symbol on every variable 
mutable int var;// if u somehow wanna change the value or contents of the varibale but it is in const mutable helps u to chnage itslef


public:
int GetX() const{//use const when u dont want to modify ur variables
    var =45;
    return m_X;
}

void SetX(int x ) {
    m_X = x;
}

};
int main(){
   /* const int a =2;
    a=4;*/
    const int MAX_age=90;
     int* a = new int;/*if i put the const before int* we cannot chnage the contents of a*
    but if we put teh const keyword after int* we can change the a* but we cannot modify the the below memory assignment 
    const int* = int const*
    if dont want to change anything nor the memory and not the contents i would use like this-
    const int const* a = new int ; promise not broken
    */
    *a = 34;//1
    a=(int*)&MAX_age;//2
}