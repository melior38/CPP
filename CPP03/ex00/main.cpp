/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:09:22 by marvin            #+#    #+#             */
/*   Updated: 2023/12/08 10:09:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ClapTrap.hpp"

int main()
{
	std::string	hero = "Mario";
	std::string	villain = "Bowser";
	// std::cout << "debug !!!" << std::endl;
	ClapTrap	mario(hero);

	mario.takeDamage(3);
	mario.beRepaired(2);
	mario.beRepaired(3);
	std::cout << "ClapTrap Mario will throw multiple attacks !" << std::endl;
	for(int i = 0; i <= 5; i++)
		mario.attack(villain);
	mario.takeDamage(6);
	mario.beRepaired(3);
	mario.beRepaired(3);
	mario.attack(villain);
	mario.takeDamage(10);
	return 0;
}