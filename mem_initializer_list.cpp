//constructer member initializer list
#include <iostream>
#include <string>
class entity{

private:
int m_score;
std::string m_name;
public:
entity()
    :m_score(0),m_name ("boom"){//member init list use them to make use of performance where ever possible 

    }

entity(const std::string& name){
    m_name = name;
}
const std::string& Getname() const{
    return m_name;
}

};
int main(){
    entity e0;
    std::cout << e0.Getname() << std:: endl;

    entity e1("dinosaur");
    std::cout << e1.Getname()<< std:: endl;
} 