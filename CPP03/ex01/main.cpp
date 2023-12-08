/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:44:40 by marvin            #+#    #+#             */
/*   Updated: 2023/12/08 14:44:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ScavTrap.hpp"

int main()
{
	std::string	hero = "Luigi";
	std::string	hero2 = "Yoshi";
	std::string	villain = "king Boo";
	ScavTrap	luigi(hero);
	ScavTrap 	yoshi(hero2);

	luigi.guardGate();
	luigi.attack(villain);
	// luigi = yoshi;
	// std::cout << std::endl;
	// luigi.guardGate();
	// luigi.attack(villain);
	return 0;
}