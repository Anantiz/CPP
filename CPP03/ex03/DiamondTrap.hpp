#pragma once

#include <iostream>
#include <string>
#include <cmath>

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:

	std::string	_name;

	DiamondTrap();

public:

	DiamondTrap(std::string name);
	~DiamondTrap();
	DiamondTrap(DiamondTrap const &right);
	DiamondTrap	&operator=(DiamondTrap const &right);

	void whoAmI(void);
};