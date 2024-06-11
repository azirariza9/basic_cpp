#include <iostream>
#include <string>

class Entity{
        
    public:
        std::string name = "";
        int health =100;
        int mana =100;
    };
    
int main (){
    Entity player;
    Entity enemy;
    enemy.name = "Jack";
    std::cout<<"Who is your name brother?\n";
    std::cin >>player.name;
    std::cout<<"Oh hello "<<player.name<<" welcome to my humble abode! \n";
    std::cout<<"BTW "<<enemy.name<<" is your enemy soo, dont you forget \n";
    std::cout<<"Though you and i know that you yourself "<<player.name<<" is your own biggest enemy..\n";



    return 0;
}
