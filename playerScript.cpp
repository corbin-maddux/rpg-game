//will be used to keep track of player's stats and combat abilities

#include <iostream>

//player's base stats
int playerBaseHealth = 100;
int playerBaseAttack = 15;
int playerBaseSpecialAttack = 10;
int playerBaseDefense = 30;
int playerBaseSpecialDefense = 20;

//function that declares player's stats with modifiers
int playerStats(){
    int playerHealth = playerBaseHealth;
    int playerAttack = playerBaseAttack;
    int playerSpecialAttack = playerBaseSpecialAttack;
    int playerDefense = playerBaseDefense;
    int playerSpecialDefense = playerBaseSpecialDefense;




    
    //displays player's stats in terminal
    std::cout << "Player's current stats are: " 
    << "\n" << playerHealth << " HP" 
    << "\n" << playerAttack << " ATK"
    << "\n" << playerSpecialAttack << " SPE ATK"
    << "\n" << playerDefense << " DEF"
    << "\n" << playerSpecialDefense << " SPE DEF"
    << std::endl;    
    
    
    return 0;
}

//main function that will run other functions in this file and inform user on  player stats
int main(){

    playerStats();


    return 0;
}