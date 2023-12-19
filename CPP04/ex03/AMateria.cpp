/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:39:00 by marvin            #+#    #+#             */
/*   Updated: 2023/12/18 19:39:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/includes/AMateria.hpp"

AMateria::AMateria() : _type("")
{

}

AMateria::AMateria(std::string const &type) : _type(type)
{

}

AMateria::AMateria(AMateria const &ref)
{
	*this = ref;
}

AMateria::~AMateria()
{

}

AMateria	&AMateria::operator=(AMateria const &ref)
{
	this->_type = ref._type;
	return *this;
}

std::string	AMateria::getType() const
{
	return this->_type;
}

void	AMateria::use(ICharacter &target);
{
	std::cout << "This is a non-castable materia and " << target.getName() << " will not receive any effect !" << std::endl;
}