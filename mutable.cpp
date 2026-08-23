#include <iostream>
#include <string>
class entity{
 private:
 std :: string m_name;
 mutable int m_Debug_count=0;
public:
 const std:: string& GetName() const
{
    m_Debug_count++;
    return m_name;
}
};

int main (){
    const entity e;
    e.GetName();
    //lambdas
    int x=8;
    auto f= [=]() mutable{
        x++;
        std :: cout<< x<< std :: endl;
    };
    
    f();
    std::cin.get();
}