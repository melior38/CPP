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

Character::Character(std::string const &name) : ICharacter(),_name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(Character const &ref)
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
		{
			if (ref._inventory[i]->getType() == "ice")
				this->_inventory[i] = new ice();
			else if (ref._inventory[i]->getType() == "cure")
				this->_inventory[i] = new cure();
		}
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
		{
			if (ref._inventory[i]->getType() == "ice")
				this->_inventory[i] = new ice();
			else if (ref._inventory[i]->getType() == "cure")
				this->_inventory[i] = new cure();
		}
	}
	return *this;
}

const std::string	&Character::getName() const
{
	return this->_name;
}

void	Character::equip(AMateria *m)
{
	int i = 0;
	while (i < 4 && this->_inventory[i] != NULL)
		i++;
	if (i == 4)
		return ;
	if (!m)
		return ;
	AMateria *tmp = 0;
	if(m->getType() == "ice")
	{
		tmp = new ice();
	}
	else if (m->getType() == "cure")
	{
		tmp = new cure();
	}
	this->_inventory[i] = tmp;
}

void	Character::unequip(int idx)
{
	if(idx >= 0 && idx < 4 && this->_inventory[idx])
		this->_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if(idx >= 0 && idx < 4 && this->_inventory[idx])
		(this->_inventory[idx])->use(target);
}
