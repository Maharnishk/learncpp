//useful to avoid code duplication
#include <iostream>
class entity{
public :
float X, Y;
 void move(float xa,float ya){
    X+=xa;
    Y+=ya;
 }

};
class player : public entity{
const char* name;
void print_name(){
    std::cout<< name<< std :: endl;
}
};
int main(){
    std::cout << sizeof(player)<< std :: endl;
    player p ;
    p.move(34,34);
    p.X=2;
   
}