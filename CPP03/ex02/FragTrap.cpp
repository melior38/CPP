/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:02:25 by marvin            #+#    #+#             */
/*   Updated: 2023/12/08 15:02:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "FragTrap constructor called" << std::endl;
	this->_name = "unknown";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &ref) : ClapTrap(ref)
{
	std::cout << "FragTrap constructor called" << std::endl;
	*this = ref;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &ref)
{
	this->_name = ref._name;
	return *this;
}

void FragTrap::highFiveGuys(void)
{
	if (this->_hit_points > 0)
		std::cout << "FragTrap " << this->_name << " is asking for a High Five !"<< std::endl;
	else
		std::cout << "FragTrap " << this->_name << " cant High Five at he's state !" << std::endl; 
}
