//Shafikov Ruslan 
// Assignment 3
// st112650@student.spbu.ru

#ifndef CompositionH
#define CompositionH
#include "Autobot.h"
class Team {
public:
	void SayTeam(std::string TeemName) const;
private:
	class RandomPlayer {
	private:
		std::string Name;
	};
	RandomPlayer player;
	std::string TeamName;
}; 

#endif