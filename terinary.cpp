//conditional assignment
#include <iostream>
#include <string>
static int s_level =1;
static int s_speed =2;
int main(){
   /* if(s_level>5)
        s_speed =10;
    else
        s_speed =5;*/
    
  s_speed = s_level > 5 ? 10/*true*/:5/*false*/;
  std:: string rank = s_level >10? "master" : "beginner";
  std:: cout<< rank << std :: endl;
    std::cin.get();
}