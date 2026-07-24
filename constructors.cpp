#include <iostream>

class entity{
public:
    float X,Y;
    entity(){
        X =0.0f;
        Y=0.0f;
    }
    entity(float x,float y){
        X=x;
        Y=y;

    }
    void Print()
    {
    std::cout << X << "," << Y<< std :: endl;
    }
};
class Log{
public:
Log()= delete;
static void write(){

}
};

int main(){ 
    Log::write;
    entity e(25.0f,33.98f);
    e.Print();
}