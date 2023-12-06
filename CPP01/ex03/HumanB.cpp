/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:26:19 by marvin            #+#    #+#             */
/*   Updated: 2023/12/04 17:26:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	
}

HumanB::~HumanB(void)
{

}

void	HumanB::setWeapon(Weapon &type)
{
	this->_weaponptr = &type;
}

void	HumanB::attack() const
{
	std::cout << this->_name << " attacks with their " << this->_weaponptr->getType() << std::endl;
}