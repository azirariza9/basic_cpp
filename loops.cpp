#include <iostream>
#include <string>

// my mission here is to making for loop like in python using c++

int main (){

std::string classes [] = {"mages", "assassins","warriors"};
int classes_count = sizeof(classes)/sizeof(classes[0]);
int stats[3];
bool continue_dist = false;
char confirm_cont;

for (int i = 0; i < classes_count; i++)
{
    while (continue_dist==false){

        std::cout<<"\tCurrent class is = "<<classes[i]<<"\n";
        if (classes[i] == "assassins"){
            std::cout<<"\tYou Filthy Casul!\n";
        }
        std::cout<<"\tAllocate Strength =\n";
        std::cin>>stats[0];
        std::cout<<"\tAllocate Agility =\n";
        std::cin>>stats[1];
        
        if (classes[i] == "assassins"&&stats[1]==0)
        {
            std::cout<<"\tNot only you are filthy casul, but you are degenerate!, agi 0 for assassins ?!,$#@# im done!\n\n";
            break;
        } 
        
        std::cout<<"\tAllocate Intelligence =\n";
        std::cin>>stats[2];
        std::cout<<"\tThank you!, Your stat is =\n"<<"\tStr = "<<stats[0]<<"\n";
        std::cout<<"\tAgi = "<<stats[1]<<"\n";
        std::cout<<"\tInt = "<<stats[2]<<"\n\n";
        if (i!=2){
        std::cout<<"Do you want to move on to the next class ? press y to continue...\n";
        std::cin>>confirm_cont;
        }
        if (confirm_cont=='y') {
            continue_dist = true;
        }
        else{
            continue_dist=false;
        }
    }
    continue_dist = false;
    if (classes[i] == "assassins"&&stats[1]==0)
        {
            break;
        } 
}

return 0;
}
