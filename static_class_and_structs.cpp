#include <iostream>
struct Entity{
 static int x,y;
 static void print(){
    std :: cout <<  x << ","<< y << std :: endl;  
}
};
static void print(Entity e ){//outsidde a class
    std :: cout << e.x << ","<< e.y << std ::endl;
}
int Entity :: x;
int Entity :: y;
int main (){
Entity e;
e.x=2;
e.y = 3;

Entity e1;
e1.x=45;
e1.y =56;

Entity::print();
Entity::print();
std::cin.get();
}