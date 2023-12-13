/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:30:39 by marvin            #+#    #+#             */
/*   Updated: 2023/12/12 18:30:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Cat.hpp"

Cat::Cat() : _type("Cat")
{
	std::cout << "Constructor of type " << MAGENTA << this->_type << " is called !" << RESET << std::endl;
}

Cat::Cat(const Cat &ref) : Animal()
{
	this->_type = ref.get_type();
}

Cat::~Cat()
{
	std::cout << "Destructor of type " << MAGENTA << this->_type << " is called !" << RESET << std::endl;
}


Cat	&Cat::operator=(const Cat &ref)
{
	this->_type = ref.get_type();
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "miaou !" << std::endl;
}

std::string Cat::get_type() const
{
	return this->_type;
}

