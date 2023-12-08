/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:31:07 by marvin            #+#    #+#             */
/*   Updated: 2023/12/08 10:31:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(const std::string name, int hp, int ep, int ad);
	ClapTrap(ClapTrap const &ref);
	~ClapTrap(void);

	ClapTrap		&operator=(ClapTrap const &ref);
	
	void			attack(const std::string& target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
	unsigned int	Get_attack_damage();

	protected:
	std::string _name;
	int	_hit_points;
	unsigned int	_Energy_points;
	unsigned int	_attack_damage;
};

#endif