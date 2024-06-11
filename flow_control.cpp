#include <iostream>


int main (){

int player_answer;
std::cout << "\tHow much will you take a step forward ?\n";
std::cin >> player_answer;

if (player_answer>5){
    std::cout<<"\tYou are brave, yet foolish at the same time\n";
}

else if(player_answer<5 && player_answer>0){
    std::cout<<"\tYou are Cautious, but remember, time wait for no one\n";

}

else {
    std::cout<<"\tYou dont even take one step, what are you? a duck?,foolish bird!\n";
}

switch (player_answer)
{
case 10:
    std::cout <<"\tThat's hell you walk into\n";
    break;
case 9:
    std::cout <<"\t9 is a nice number and my favorite, anyway be careful\n";
    break;

default:
    std::cout<<"\tYou Duck!\n";
    break;
}



return 0;

}
