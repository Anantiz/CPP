#include "Zombie.hpp"

Zombie::Zombie(void)
{
	this->_name = "default";
}

Zombie::Zombie(Zombie const &src)
{
	*this = src;
}
Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->_name << " has been destroyed" << std::endl;
}

Zombie	&Zombie::operator=(Zombie const &cpy)
{
	this->_name = cpy._name;
	return *this;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

Zombie	*newZombie(std::string name)
{
	Zombie *z = new Zombie(name);
	return z;
}
