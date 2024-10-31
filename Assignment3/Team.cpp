//Shafikov Ruslan 
// Assignment 3
// st112650@student.spbu.ru

#include "Team.h"
void Team::SayTeam(std::string& TeamName) const{
    std::cout << "We are " << TeamName;
}

 Team::Team(const std::string& teamName, const std::string& playerName)
 : player(playerName), TeamName(teamName) {}
