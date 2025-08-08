#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("anonymous")
{
	_hitPoints    = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap default constructed\n";
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	_hitPoints    = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap \"" << _name << "\" constructed\n";
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	// *this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs)
{
    ClapTrap::operator=(rhs);
    return *this;
}

FragTrap::~FragTrap() { std::cout << "FragTrap destroyed\n"; }



// behave
void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap \"" << _name << "\" requests: High five, everybody! ✋\n";
}