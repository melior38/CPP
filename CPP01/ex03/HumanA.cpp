/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:26:09 by marvin            #+#    #+#             */
/*   Updated: 2023/12/04 17:26:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &w_name) : _name(name), _weaponref(w_name)
{
	// this->_weaponref = w_name;
}

HumanA::~HumanA(void)
{

}

void	HumanA::attack() const
{
	std::cout << this->_name << " attacks with their " << this->_weaponref.getType() << std::endl;
}