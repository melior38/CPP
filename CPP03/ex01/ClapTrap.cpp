/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 11:11:48 by marvin            #+#    #+#             */
/*   Updated: 2023/12/08 11:11:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("unknown"), _hit_points(10), _Energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name) , _hit_points(10), _Energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name, int hp, int ep, int ad) : _name(name), _hit_points(hp), _Energy_points(ep), _attack_damage(ad)
{
	std::cout << "ClapTrap full constructor called for : " << this->_name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &ref)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	*this = ref;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &ref)
{
	this->_name = ref._name;
	this->_hit_points = ref._hit_points;
	this->_Energy_points = ref._Energy_points;
	this->_attack_damage = ref._attack_damage;
	return (*this);
}

	
void	ClapTrap::attack(const std::string& target)
{
	if (this->_Energy_points > 0)
		std::cout << "ClapTrap " << this->_name <<  " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	else
		std::cout << "ClapTrap "<< this->_name << " struggle throwing a punch and misses its attacks. ClapTrap " << this->_name << " is out of breath" << std::endl;
	this->_Energy_points--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " is getting attacked !" << std::endl;
	this->_hit_points = this->_hit_points - amount;
	if (this->_hit_points > 0)
		std::cout << "causing him to take " << amount << " points of damage!" << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " died to this attack !" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_Energy_points > 0)
		std::cout << "ClapTrap " << this->_name <<  " recover from its wounds for " << amount << " HP" << std::endl;
	else if (this->_hit_points <= 0)
		std::cout << "ClapTrap " << this->_name << "is dead" << std::endl;
	else
		std::cout << "ClapTrap "<< this->_name << " struggle bandaging, his weak hands made him fail. ClapTrap " << this->_name << " is out of breath" << std::endl;
	this->_Energy_points--;
	this->_hit_points += amount;
	if (this->_hit_points > 10)
		this->_hit_points = 10;
}
unsigned int ClapTrap::Get_attack_damage()
{
	return this->_attack_damage;
}