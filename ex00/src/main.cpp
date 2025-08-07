#include "../include/ClapTrap.hpp"

int main()
{
	ClapTrap a("bassa-");
	ClapTrap b("kirito");

	a.attack("Training Dummy");
	b.takeDamage(4);
	b.beRepaired(3);

	for (int i = 0; i < 11; ++i)
		a.attack("Target");

	return 0;
}