#include "../include/FragTrap.hpp"
#include "../include/ScavTrap.hpp"

int main() {
    FragTrap bob("bob");
    bob.attack("Training Dummy");
    bob.takeDamage(42);
    bob.beRepaired(15);
    bob.highFivesGuys();

    std::cout << "\n--- ポリモーフィズム確認 ---\n";
    ClapTrap* poly = new FragTrap("Poly");
    poly->attack("Target");
    delete poly;

    return 0;
}
