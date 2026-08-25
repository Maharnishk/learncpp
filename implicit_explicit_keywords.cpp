#include <iostream>
#include <string>

class Entity{
private:
std :: string m_name;
int m_age;
public: 
Entity(const std::string& name)
    :m_name(name),m_age(-1){}
 explicit Entity(int age) // use explicit keyword when u want to call a particular function or method explicitly

:m_name("jinggg"),m_age(age){}

};
void printable(const Entity& entity){
    ///print
}
int main(){
    printable( Entity(345));
    printable(Entity("crocodile"));
    Entity a = "tortoise";
    Entity b = Entity( 33);

    std:: cin.get();
}