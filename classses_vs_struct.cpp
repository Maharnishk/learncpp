//class - it is private by default 
//struct - its is public by default
#include <iostream>
//#define struct class // this will make all our struct into class
class Player{
public:
    int x ,y;
    int speed;
    void move (int xa,int ya){
        x += xa *speed;
        y += ya*speed;
}
};
struct Player{
    int x ,y;
    int speed;
    void move (int xa,int ya){
        x += xa *speed;
        y += ya*speed;
}
};
/*void move (Player& player,int xa,int ya){
    player.x += xa * player.speed;
    player.y += ya * player.speed;
}*///(this is func when it is outside the class)
int main()
{
    Player player;
    player.x=5;
    player.move(1,-1);
}
/*when do we use struct or class?
depends on a person but for reference - use structs used to represent or store multiple variables
just to make our code easier
we can also add methods into this structs.
->dont use inheritance with structs use classes for this 

*/