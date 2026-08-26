#include <iostream>
#include <string>
class Entity{
public:
void print() const {
    std:: cout << "hello!"<< std :: endl;
}
};
class scopedptr{
private:
    Entity* m_obj;
public:
scopedptr(Entity* entity)
    : m_obj(entity)
{
}
~scopedptr(){
    delete m_obj;
}
/*Entity* GetObj(){
    return  m_obj;
}*/ //instead of this  we can write 
Entity* operator->(){
    return m_obj;
}
const Entity* operator->() const{
    return m_obj;
}
};
struct Vector3{
float x,y,z;
};
int main()
{
    int offset =  (int)&((Vector3*)0)->x;//cast from 'float*' to 'int'
    std:: cout << offset << std :: endl;
   /* entity e;
    e.print();
    entity* ptr = &e;
    entity& entity =  *ptr; instead of calling this we can simply use arrow operator 
     ptr->print();// it dereference the ptr  and call the normal enittya dn prints the function 
     arrow makes us dereferencing manually 
   (*ptr).print();// we hvw to write *ptr in brackets write this because of operator precedence
    */
    scopedptr entity =  new Entity();
    entity->print();
    // used to clean code
}