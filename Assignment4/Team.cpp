//Shafikov Ruslan 
// Assignment 3
// st112650@student.spbu.ru

#include "Team.h"
void Team::SayTeam(std::string& TeamName) const {
	std::cout << "We are " << TeamName;
}

bool Team::operator>(const Team& other) {
	return this->TeamName.size() > other.TeamName.size() ? true : false;
}

bool Team::operator<(const Team& other) {
	return this->TeamName.size() < other.TeamName.size() ? true : false;
}

std::ostream& operator<<(std::ostream& os, const Team& T) {
	os << T.TeamName;
	return os;
}

Team::Team() : TeamName("Unknown Team"), player("Unknown Player") {
}
Team::Team(const std::string& teamName, const std::string& playerName) : player(playerName), TeamName(teamName) {}