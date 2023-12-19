/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:38:24 by marvin            #+#    #+#             */
/*   Updated: 2023/12/18 19:38:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/includes/Ice.hpp"

ice::ice() : _type("ice")
{

}

ice::ice(std::string const &type) : _type(type)
{

}

ice::ice(ice const &ref) : AMateria(ref)
{
	*this = ref;
}

ice::~ice()
{

}

ice	&ice::operator=(ice const &ref)
{
	this->_type = ref._type;
	return *this;
}

std::string	ice::getType() const
{
	return this->_type;
}

AMatera	*ice::clone() const
{
	AMateria* ret = new ice();
	return ret;
}

void	ice::use(ICharacter &target);
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}