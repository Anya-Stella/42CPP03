#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

// include
#include "./ClapTrap.hpp"

// class
class FragTrap : public ClapTrap
{
public:
	// orthodox Canonical Form
	FragTrap();
	FragTrap(const std::string &name);
	FragTrap(const FragTrap &other);
	FragTrap &operator=(const FragTrap &rhs);
	~FragTrap();

	// new Behave
	void highFivesGuys(void);
};

#endif
