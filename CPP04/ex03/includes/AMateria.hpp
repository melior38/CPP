/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:25:02 by marvin            #+#    #+#             */
/*   Updated: 2023/12/14 17:25:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	public:
	AMateria();
	AMateria(std::string const &type);
	AMateria(AMateria const &ref);
	virtual ~AMateria();

	AMateria			&operator=(AMateria const &ref);
	std::string const 	&getType() const; //Returns the materia type
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter &target);
	protected:
	std::string			_type;
};

#endif