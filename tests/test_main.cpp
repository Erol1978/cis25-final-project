#include "../src/Player.h"
#include <cassert>
#include <iostream>

void test_normal() {
    Player p("Ali", 50);
    assert(p.getName() == "Ali");
    assert(p.getHealth() == 50);
}

void test_edge() {
    Player p("", 0);
    assert(p.getName() == "");
    assert(p.getHealth() == 0);
}

void test_boundary() {
    Player p("Max", 100);
    assert(p.getHealth() == 100);
}

void test_take_damage() {
    Player p("Hero", 100);
    p.takeDamage(30);
    assert(p.getHealth() == 70);
}

void test_heal() {
    Player p("Hero", 50);
    p.heal(20);
    assert(p.getHealth() == 70);
}

void test_health_limits() {
    Player p("Hero", 100);
    p.takeDamage(200);
    assert(p.getHealth() == 0);
    p.heal(500);
    assert(p.getHealth() == 100);
}

int main() {
    std::cout << "Running tests...\n";

    test_normal();
    test_edge();
    test_boundary();
    test_take_damage();
    test_heal();
    test_health_limits();

    std::cout << "All tests passed.\n";
    return 0;
}
