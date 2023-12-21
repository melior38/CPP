/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 20:50:40 by marvin            #+#    #+#             */
/*   Updated: 2023/12/18 20:50:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Character.hpp"

Character::Character() : ICharacter(), _name("")
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(std::string const &name) : ICharacter(), _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(Character const &ref) : _name(ref._name)
{
	for (int i = 0; i < 4; i++)
	{
		if (ref._inventory[i])
			this->_inventory[i] = ref._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
		{
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
	}
}

Character	&Character::operator=(Character const &ref)
{
	this->_name = ref._name;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
		{
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
		if (ref._inventory[i])
			this->_inventory[i] = ref._inventory[i]->clone();
	}
	return *this;
}

const std::string	&Character::getName() const
{
	return this->_name;
}

void	Character::equip(AMateria *m)
{
	if (!m)
		return ;
	for(int i = 0; i < 4; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m->clone();
			break ;
		}
	}
}

void	Character::unequip(int idx)
{
	if(idx >= 0 && idx < 4)
		this->_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if(idx >= 0 && idx < 4 && this->_inventory[idx])
		this->_inventory[idx]->use(target);
}

// std::ostream& operator<<(std::ostream& os, const ICharacter& character)
// {
// 	os << character.getName();
// 	return os;
// }