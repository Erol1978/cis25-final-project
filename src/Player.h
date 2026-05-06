#pragma once
#include <string>

class Player {
private:
    std::string name;
    int health;

public:
    Player(std::string name = "Hero", int health = 100);

    std::string getName() const;
    int getHealth() const;

    void display() const;
};
