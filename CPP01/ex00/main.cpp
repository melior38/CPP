/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouchet <asouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:17:39 by asouchet          #+#    #+#             */
/*   Updated: 2023/11/14 13:44:24 by asouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.hpp"

int	main()
{
	std::string bob = "bob the new zombie";
	std::string loud_guy = "loud guy";
	Zombie *ptr = newZombie(bob);
	ptr->announce();
	delete ptr;
	randomChump(loud_guy);
	return 0;
}
