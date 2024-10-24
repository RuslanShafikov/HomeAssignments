//Shafikov Ruslan
// Assignment 3
// st112650@student.spbu.ru

#ifndef CompositionH
#define CompositionH

#include <string>
#include "Autobot.h"

class Team {
private:
    class RandomPlayer {
    public:
        RandomPlayer(const std::string& name) : Name(name) {}

    private:
        std::string Name;
    };

    RandomPlayer player;
    std::string TeamName;

public:
    Team(const std::string& teamName, const std::string& playerName)
        : player(playerName), TeamName(teamName) {}

    void SayTeam(const std::string& teamName) const;
};

#endif
