#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

// include
#include <iostream>

// class(use virtual to destructer.)
class ClapTrap
{
protected:
	std::string _name;
	int _hitPoints;
	int _energyPoints;
	int _attackDamage;

public:
	// orthodox Canonical Form
	ClapTrap();
	ClapTrap(const std::string &name);
	ClapTrap(const ClapTrap &other);
	ClapTrap &operator=(const ClapTrap &rhs);
	virtual ~ClapTrap();

	// Behave
	virtual void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
