/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:38:32 by marvin            #+#    #+#             */
/*   Updated: 2023/12/18 19:38:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Cure.hpp"

cure::cure() : AMateria("cure")
{

}

cure::cure(cure const &ref) : AMateria(ref)
{
	this->_type = ref._type;
	*this = ref;
}

cure::~cure()
{

}

cure	&cure::operator=(cure const &ref)
{
	this->_type = ref._type;
	return *this;
}

AMateria	*cure::clone() const
{
	return new cure();
}

void	cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}