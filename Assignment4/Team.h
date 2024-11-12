//Shafikov Ruslan 
// Assignment 3
// st112650@student.spbu.ru

#ifndef CompositionH
#define CompositionH
#include <string>
#include "Autobot.h"

class Team {
public:
	class RandomPlayer {
	public:
		RandomPlayer(const std::string& name) : Name(name) {}

	private:
		std::string Name;
	};
	Team(const std::string& teamName, const std::string& playerName);
	Team();

	void SayTeam(std::string& teamName) const;

	friend std::ostream& operator << (std::ostream& os, const Team &A);
	bool operator>(const Team& other);
	bool operator<(const Team& other);
private:
	std::string TeamName;
	RandomPlayer player;
};

#endif

