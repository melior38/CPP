/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:29:36 by marvin            #+#    #+#             */
/*   Updated: 2023/12/12 18:29:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Dog.hpp"

Dog::Dog() : _type("Dog")
{
	std::cout << "Constructor of type " << RED << this->_type << " is called !" << RESET << std::endl;
}

Dog::Dog(const Dog &ref) : Animal()
{
	*this = ref;
}

Dog::~Dog()
{
	std::cout << "Destructor of type " << RED << this->_type << " is called !" << RESET << std::endl;
}

Dog	&Dog::operator=(const Dog &ref)
{
	this->_type = ref.get_type();
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "wooof !" << std::endl;
}

std::string Dog::get_type() const
{
	return this->_type;
}
