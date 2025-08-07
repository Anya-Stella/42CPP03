#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

// include
#include "./ClapTrap.hpp"

// class
class ScavTrap : public ClapTrap
{
public:
	// orthodox Canonical Form
	ScavTrap();
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &other);
	ScavTrap &operator=(const ScavTrap &rhs);
	~ScavTrap();

	// new Behave
	void guardGate();
	void attack(const std::string &target);
};

#endif
