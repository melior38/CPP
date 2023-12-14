/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:19:30 by marvin            #+#    #+#             */
/*   Updated: 2023/12/12 18:19:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Animal.hpp"

Animal::Animal() : _type("AAnimal")
{
	std::cout << "Constructor of type " << CYAN << this->_type << " is called !" << RESET << std::endl;
}

Animal::Animal(const Animal &ref) 
{
	*this = ref;
}

Animal::~Animal()
{
	std::cout << "Destructor of type " << CYAN << this->_type << " is called !" <<  RESET << std::endl;
}

Animal	&Animal::operator=(const Animal &ref)
{
	this->_type = ref.get_type();
	return *this;
}

std::string Animal::get_type() const
{
	return this->_type;
}

