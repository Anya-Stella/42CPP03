#include "../include/ClapTrap.hpp"

/* orthodox Canonical */
ClapTrap::ClapTrap() : _name("anonymous"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default ClapTrap constructed.\n";
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << "Constructed. \n";
}
ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " destructed.\n";
}

/* behave */

void ClapTrap::attack(const std::string &target)
{
	if (_hitPoints <= 0 || _energyPoints <= 0)
	{
		std::cout << _name << " can't attack (out of HP/EP)!\n";
		return;
	}
	--_energyPoints;
	std::cout << "ClapTrap " << _name << "attacks " << target << ", causing " << _attackDamage << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoints -= amount;

	std::cout << "ClapTrap " << _name << " takes " << amount << " damage! (" << _hitPoints << "HP left)\n";

	if (_hitPoints <= 0)
		std::cout << "ClapTrap " << _name << "has been knocked out!\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints <= 0 || _energyPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << "can't repaired.(out of HP/EP)!\n";
		return;
	}
	--_energyPoints;
	_hitPoints += amount;
	std::cout << "ClapTrap " << _name << " repairs itself for " << amount << " HP (" << _hitPoints << " HP now)\n";
}
