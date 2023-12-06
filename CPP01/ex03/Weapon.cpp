/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:04:58 by marvin            #+#    #+#             */
/*   Updated: 2023/12/04 17:04:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Weapon.hpp"

	Weapon::Weapon()
	{
		
	}

	Weapon::Weapon(std::string type) : _type(type)
	{

	}

	Weapon&	Weapon::operator=(const Weapon& type)
	{
		this->_type = type.getType();
		return *this;
	}

	Weapon::~Weapon(void)
	{

	}

	void	Weapon::setType(std::string type)
	{
		this->_type = type;
	}

	std::string	Weapon::getType(void) const
	{
		return (this->_type);
	}