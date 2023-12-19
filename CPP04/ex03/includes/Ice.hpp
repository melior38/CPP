/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:29:05 by marvin            #+#    #+#             */
/*   Updated: 2023/12/14 17:29:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class ice : public AMateria
{
	public:
	ice();
	ice(const ice &ref);
	virtual ~ice();

	ice	&operator=(const ice &ref);
	virtual	AMateria*	clone() const;
	virtual void use(ICharacter& target);
	private: 
};

#endif