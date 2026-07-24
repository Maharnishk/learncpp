//**/
#include <iostream>
class entity{
    public:
  virtual  std ::string Getname() {
        return "entity";
    }
};
class player : public entity{
private:
std :: string m_name;
public:
player(const std:: string& name):m_name(name){}
    std ::string Getname() override {
        return m_name;
    }
};
void print_name(entity* entity){
    std :: cout << entity->Getname()<< std :: endl;

}

int main(){
    entity* e = new entity();
    print_name(e);

    player* p = new player("Chicken");
    print_name(p);
}