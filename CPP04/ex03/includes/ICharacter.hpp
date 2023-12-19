/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:23:59 by marvin            #+#    #+#             */
/*   Updated: 2023/12/14 17:23:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_ICHARACTER_H
#define CPP_ICHARACTER_H

#include <iostream>

class ICharacter
{
public:
	virtual ~ICharacter();
	virtual std::string const	&getName() const = 0;
	virtual void				equip(AMateria * m) = 0;
	virtual void				unequip(int idx) = 0;
	virtual void				use(int idx, ICharacter& target) = 0;
};


#endif //CPP_ICHARACTER_H