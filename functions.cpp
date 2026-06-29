//functions avoid repetations of a code --we can call them infinitley
#include <iostream>
int mul(int a , int b){
    return a*b;
}
void mulandlog(int a,int b ){
    int result= mul(a,b);
 std :: cout << result << std :: endl;
}
int main(){
/*int result= mul(4,5);
std :: cout << result << std :: endl;
int result2= mul(5,5);
std :: cout << result2 << std :: endl;
int result3= mul(7,5);
std :: cout << result3 << std :: endl;*/
mulandlog(30,45);
mulandlog(90,90);
return 0;
}