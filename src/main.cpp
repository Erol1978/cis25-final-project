#include "Player.h"

int main() {
    Player player;

    player.display();

    player.takeDamage(30);
    player.display();

    player.heal(20);
    player.display();

    return 0;
}
