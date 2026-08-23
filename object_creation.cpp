#include <iostream>
#include <string>
using string = std::string;
class Entity{
private:
string m_name;
public:
Entity():m_name("telidhu"){

}
Entity(const string& name)
:m_name(name)
{
}
const string& Getname() const{return m_name;}
};
int main(){
  /* just a failed code for pointer going out of scope in stack
    Entity*e;
    {
        Entity entity("maharnish"); // fastest way to instantiate an object
        e=&entity;
        std:: cout << entity.Getname()<< std ::endl;
    }*/
   // HEAP
    Entity*e;
    {
        Entity* entity = new Entity("maharnish");
        e=entity;
        std:: cout << entity->Getname()<< std ::endl;
        delete e;
}
}