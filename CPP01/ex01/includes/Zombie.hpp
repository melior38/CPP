/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouchet <asouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:33:45 by asouchet          #+#    #+#             */
/*   Updated: 2023/11/14 15:06:29 by asouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
	std::string _name;
	int			_id;
public:
	Zombie(int id, std::string name);
	~Zombie();
	void	announce(void) const;
};

Zombie		*zombieHorde(int number, std::string name);

#endif