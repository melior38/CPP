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
#ifndef CPP_CHARACTER_H
#define CPP_CHARACTER_H

#include <iostream>
#include "/includes/ICharacter.hpp"


class Character : public ICharacter
{
public:
	Character();	
	Character(ICharacter const &ref);	
	virtual ~Character();

	Character					&operator=(Character const &ref);
	virtual std::string const	&getName() const;
	virtual void				equip(AMateria * m);
	virtual void				unequip(int idx);
	virtual void				use(int idx, Character& target);
private:
	std::string					_name;
	AMateria*					_inventory[4];
};
#endif