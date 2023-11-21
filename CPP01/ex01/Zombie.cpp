/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouchet <asouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:37:14 by asouchet          #+#    #+#             */
/*   Updated: 2023/11/14 15:07:21 by asouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.hpp"

Zombie::Zombie(int id, std::string name) : _name(name), _id(id)
{
	std::cout << this->_name << this->_id << " was born" << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << this->_name << " " << this->_id << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " " << this->_id << " died" << std::endl;
}
