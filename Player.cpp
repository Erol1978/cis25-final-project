#include "Player.h"
#include <iostream>

Player::Player(std::string name, int health)
    : name(name), health(health) {}

std::string Player::getName() const {
    return name;
}

int Player::getHealth() const {
    return health;
}

void Player::display() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Health: " << health << std::endl;
}
