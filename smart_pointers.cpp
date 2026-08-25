#include <iostream>
#include <string>
#include <memory>// to acess smart pointers

// unique pointers - these are the pointers which gets deleted when it goes out of scope and u cannot copy a unique pointers cause u will end up pointing to free memory space

class Entity{
public:
Entity(){
    std:: cout << "created entity" << std :: endl;
}
~Entity(){
    std:: cout << "destroyed entity" << std :: endl;
}
void printable(){

}
};

int main(){
{
    std::shared_ptr<Entity> e0;
    {
    //std::unique_ptr<Entity>entity(new Entity());
    //std::unique_ptr<Entity>entity= std :: make_unique< Entity>();//preffered way of creating a unique pointer due to exception safety
    //u cannot do this because the frame is deleted std::unique_ptr<Entity>e0 = entity;
    
    //shared pointer - used to copying a ptr and increase a ref count where the references goes out of scope the optr is removed
    std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
    // u can also do this  but dont prefer this  std::shared_ptr<Entity>sharedEntity(new Entity());
   
    //weakpointer- this wouldnt increase ref count 
    std::weak_ptr<Entity> weakpointer =  sharedEntity;
   
    //entity->printable();
    e0=sharedEntity;
    }

}   // try to use the smart pointers all the time if possible 
    //usage preference ----- unique > shared > weak
    std:: cin.get();
}