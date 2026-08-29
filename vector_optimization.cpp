//how can we optimizing a vector 
#include <iostream>
#include <string>
#include <vector>
struct vertex{
float x,y,z;
vertex(float x, float y , float z)
:x(x),y(y),z(z)
{
}
vertex(const vertex& vertex)
:x(vertex.x),y(vertex.y),z(vertex.z)
{
    std::cout << "copied" << std :: endl;
}
};
int main(){
    std::vector<vertex> vertices;
    vertices.reserve(3);
    vertices.emplace_back(1,2,3);// instead of passing the object(push_back) we just pass the parameter list(emplace_back) to run better
    vertices.emplace_back(4,5,6);
    vertices.emplace_back(7,8,9);

    std:: cin.get();
}