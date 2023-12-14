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
	this->_brain = new Brain();

}

Dog::Dog(const Dog &ref) : Animal()
{
	*this = ref;
}

Dog::~Dog()
{
	std::cout << "Destructor of type " << RED << this->_type << " is called !" << RESET << std::endl;
	delete this->_brain;
}

Dog	&Dog::operator=(const Dog &ref)
{
	this->_type = ref.get_type();
	this->_brain = new Brain();
	this->_brain = ref._brain;
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

Brain*	Dog::getBrain() const
{
	return this->_brain;
}
