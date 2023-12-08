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

#include "includes/FragTrap.hpp"

int main(void)
{
	FragTrap A("Jony");
	FragTrap B("Samy");
	FragTrap C(A);

	A.attack("Samy");
	B.takeDamage(A.Get_attack_damage());

	A.attack("Samy");
	B.takeDamage(A.Get_attack_damage());

	B.beRepaired(2);
	B.beRepaired(10);

	for(int i = 0; i < 6; i++)
	{
		A.attack("Samy");
		B.takeDamage(A.Get_attack_damage());
	}

	A.highFiveGuys();
	B.highFiveGuys();
	return 0;
}