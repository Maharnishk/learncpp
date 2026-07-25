#include <iostream>

struct entity{
//defualt visibilty will be public
};
class entity{
    //defualt visibilty will be private
private:   
 //   int X,Y;
public:
    entity(){
        X=0;
    }
protected:
int X,Y;
void Print() {}      
};
class player:public entity{
 public:
 player(){
    X=2; 
    Print();
 }
};
int main(){
    entity e;
    e.Print();
    e.X = 2;

}