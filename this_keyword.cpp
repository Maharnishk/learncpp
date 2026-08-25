//this is pointer to current object instance 
#include <iostream>
#include <string>
void printable(const Entity& e);
class Entity{
private:
//std:: string m_name;
public:
int x,y;
Entity(int x,int y){
    Entity* e =  this;
    e->x =x;
    e->y =y;
    Entity& e = *this;
    printable(*this); 
    delete this;//avoid this(memory frees) 
}
int Get()const{
    const Entity& e = *this;

    return x;
}
};
void printable(Entity* e){

}

 int main(){

 }