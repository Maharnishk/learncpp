#include <iostream>
#include <string>
class Entity{
public:
Entity(){
    std:: cout << "created entity" << std :: endl;
}
~Entity(){
    std:: cout << "destroyed entity" << std :: endl;
}
};
/*void  createArray(int* array ){
    int* array =  new int [50];
} a way of creating an array but not suitable for us  cuase it ends in the scope*/
class scopedptr{
    private:
        Entity* m_ptr;
    public:
    scopedptr(Entity* ptr)
    :m_ptr(ptr)
    {
    }
    
    ~scopedptr(){
        delete m_ptr;
    }
}; 

int main()//scope
{
    //int array[50];
    //createArray(array);

    {
        scopedptr e2= new Entity();// automatic through scoped pointers
        //Entity* e1 =  new Entity(); manually deleting on heap 
        //delete e1;
    }

    std :: cin.get();
}