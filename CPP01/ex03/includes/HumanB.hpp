/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:28:41 by marvin            #+#    #+#             */
/*   Updated: 2023/12/04 17:28:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
	public:
	HumanB(std::string name);
	~HumanB();
	void	setWeapon(Weapon &type);
	void	attack(void) const;
	private:
	std::string _name;
	Weapon *_weaponptr;
};

#endif