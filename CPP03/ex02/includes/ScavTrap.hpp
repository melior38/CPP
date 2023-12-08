/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:53:49 by marvin            #+#    #+#             */
/*   Updated: 2023/12/08 13:53:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &ref);
	~ScavTrap();
	ScavTrap	&operator=(ScavTrap const &ref);

	void	attack(std::string const &target);
	void	guardGate();
	private:
	bool	_guard_state;
};

#endif