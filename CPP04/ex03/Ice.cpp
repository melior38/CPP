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

#include "includes/Ice.hpp"

ice::ice() : AMateria("ice")
{

}

ice::ice(ice const &ref) : AMateria(ref)
{
	this->_type = ref._type;
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

AMateria	*ice::clone() const
{
	return new ice();
}

void	ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}