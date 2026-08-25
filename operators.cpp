# include <iostream>
#include <string>
struct vector2{
float x,y;
vector2(float x ,float y)
    :x(x),y(y){}
vector2 add(const vector2 & other ) const{
    return operator+(other);{
    }
} 
vector2 operator+(const vector2& other) const{
    return vector2(x + other.x,y + other.y); 
}
vector2 multiply(const vector2 & other ) const{
    return vector2(x *other.x,y * other.y);{

    }
}
vector2 operator*(const vector2& other) const {
    return multiply(other);

};

std::ostream& operator << (std::ostream& stream,const vector2& other){
    stream << other.x << ","<< other.y;
    return stream;
}
int main()
{
    vector2 position(4.0f,4.0f);
    vector2 speed(0.5f,1.5f);
    vector2 powerup(1.1f,1.1f);
    
    vector2 result1 = position.add(speed.multiply(powerup));// this is without operator overloading
    vector2 result2 = position+speed*powerup;
    std :: cout << result2 << std :: endl; 
    std :: cin.get();

}