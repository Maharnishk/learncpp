#include <iostream>
/*class singleton{
private:
static singleton* s_instance;
public:
static singleton& get(){
    return * s_instance;
}
singleton* singleton::s_instance = nullptr;
void hello(){

}
};*/
//other way of writing the above code
class singleton{
public:
static singleton& get(){
    static singleton instance; // we have to have that static keyword as it destroys once its out of scope
    return instance;
}
void hello(){
std:: cout << "hello one and two! " << std :: endl;
}
};
void function()
{
    static int i =0; // we use static so we dont get one printing all the time in console
    i++;
    std:: cout << i << std :: endl;
}
int main(){
    singleton::get().hello();
    std:: cin.get();
}
