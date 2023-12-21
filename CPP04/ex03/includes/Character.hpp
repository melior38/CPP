/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 20:57:09 by marvin            #+#    #+#             */
/*   Updated: 2023/12/18 20:57:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"


class Character : public ICharacter
{
public:
	Character();	
	Character(Character const &ref);	
	Character(std::string const &name);
	virtual ~Character();

	Character					&operator=(Character const &ref);
	virtual std::string const	&getName() const;
	virtual void				equip(AMateria *m);
	virtual void				unequip(int idx);
	virtual void				use(int idx, ICharacter& target);
private:
	std::string					_name;
	AMateria*					_inventory[4];
};

std::ostream& operator<<(std::ostream& os, const ICharacter& character);

#endif