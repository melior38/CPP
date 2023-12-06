/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:01:06 by marvin            #+#    #+#             */
/*   Updated: 2023/12/04 17:01:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	public:
	Weapon(void);
	Weapon(std::string type);
	Weapon &operator=(const Weapon& type);
	~Weapon();
	void setType(std::string type);
	std::string	getType(void) const;
	private:
	std::string	_type;
};

#endif