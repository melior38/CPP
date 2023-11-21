/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouchet <asouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:16:17 by asouchet          #+#    #+#             */
/*   Updated: 2023/11/14 13:40:10 by asouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie	*bob = new Zombie(name);
	return bob;
}