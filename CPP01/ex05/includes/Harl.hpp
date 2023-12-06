/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:11:01 by marvin            #+#    #+#             */
/*   Updated: 2023/12/06 16:11:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
	public:
	Harl(void);
	~Harl(void);
	void complain( std::string level );

	private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

};


#endif