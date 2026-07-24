//any object is destroyed then the destructors gets called
#include <iostream>

class entity{
public:
    float X,Y;
    entity(){
        X =0.0f;
        Y=0.0f;
         std :: cout << "Created entity"<<std :: endl;
    }
    ~entity(){
        std :: cout << "Destroyed entity"<<std :: endl;
    }
    void Print()
    {
    std::cout << X << "," << Y<< std :: endl;
    }
};
void func(){
entity e;
e.Print();
}

int main(){ 
func();    
}