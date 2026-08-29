//usage of STL
//vector = dynamic arraylist
#include <iostream>
#include <string>
#include <vector>


struct vertex{
     float x,y,z;
};
std::ostream& operator<<(std::ostream& stream ,const vertex& vertex){
    stream << vertex.x << "," << vertex.y<< "," << vertex.z;
    return stream;
}
//when u are passing vertices into a function make sure u create a function like this 
void function(const std:: vector<vertex>& vertices){

}
int main(){
    std:: vector<vertex>vertices;// use normal variables than pointer in this 
    vertices.push_back({1,2,3});
    vertices.push_back({4,5,6});
    function(vertices);
    
    for(int i =0;i<vertices.size();i++){
        std::cout << vertices[i] << std:: endl;
    }
    
    vertices.erase(vertices.begin()+1);
    
    for(vertex v : vertices){
        std::cout << v << std:: endl;
    }
    vertices.clear();
    vertices.erase(vertices.begin()+1);
    std:: cin.get();
}