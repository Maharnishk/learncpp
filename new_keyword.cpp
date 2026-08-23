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
    int a =2;
    int* b = new int[50];
    Entity* e = new(b) Entity();
    free(e);
    delete e;
    delete[] b;
}