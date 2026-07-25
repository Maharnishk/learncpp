//it is also called as pure virtual function//**/
#include <iostream>
#include <string>
class Printable{
public: 
virtual std :: string Getclassname() =0;//this is making it a pure virtual function

};
class entity: public Printable{
    public:
  virtual  std ::string Getname()  {return "entity";}
    std :: string Getclassname() override { return "entity";}
};
class player : public entity{
private:
std :: string m_name;
public:
player(const std:: string& name):m_name(name){}
    std ::string Getname() override {
        return m_name;
    }
    std :: string Getclassname() override { return "player";}
};
void print_name(entity* entity){
    std :: cout << entity->Getname()<< std :: endl;

}
void Print(Printable* obj){
    std :: cout << obj->Getclassname()<< std :: endl;
}

int main(){
    entity* e = new entity();
    //print_name(e);

    player* p = new player("Chicken");
   // print_name(p);
    Print(e);
    Print(p);

}
