/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouchet <asouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:07:38 by asouchet          #+#    #+#             */
/*   Updated: 2023/11/14 15:09:52 by asouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.hpp"

int	main()
{
	std::string zom = "zombie horde goons num.";
	Zombie *ptr = zombieHorde(4, zom);
	ptr->announce();
	
	randomChump(loud_guy);
	return 0;
}
