/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:56:21 by marvin            #+#    #+#             */
/*   Updated: 2023/12/08 13:56:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("unknown", 100, 50, 20), _guard_state(false)
{
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20), _guard_state(false)
{
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &ref) : ClapTrap(ref)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	*this = ref;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &ref)
{
	this->_name = ref._name;
	return *this;
}

void	ScavTrap::attack(std::string const &target)
{
	if (this->_Energy_points <= 0)
		std::cout << "ScavTrap " << this->_name << " is exhausted." << std::endl;
	else if (this->_hit_points <= 0)
		std::cout << "ScavTrap " << this->_name << "is dead" << std::endl;
	else
	{
		std::cout << "ScavTrap " << this->_name << " is throwing a shield attack on " << target << std::endl;
		std::cout << "doing " << this->Get_attack_damage() << " damages." << std::endl;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "Scavtrap " << this->_name << " entered Gate keeper mode." << std::endl;
	this->_guard_state = true;
}
