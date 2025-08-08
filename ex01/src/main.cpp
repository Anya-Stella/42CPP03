#include "../include/ScavTrap.hpp"

int main()
{
	ScavTrap bob("Bob");
	bob.attack("training dummy");
	bob.takeDamage(30);
	bob.beRepaired(20);
	bob.guardGate();

	std::cout << "ポリモーフィズム確認\n";

	ClapTrap *ptr = new ScavTrap("Alice");
	ptr->attack("target");
	delete ptr;
}
