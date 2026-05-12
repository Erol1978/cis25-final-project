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

void Player::takeDamage(int amount) {
    health -= amount;

    if (health < 0) {
        health = 0;
    }
}

void Player::heal(int amount) {
    health += amount;

    if (health > 100) {
        health = 100;
    }
}

void Player::display() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Health: " << health << std::endl;
}
