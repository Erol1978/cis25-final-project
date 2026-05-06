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

int main() {
    std::cout << "Running tests...\n";
    test_normal();
    test_edge();
    test_boundary();
    std::cout << "All tests passed.\n";
    return 0;
}
