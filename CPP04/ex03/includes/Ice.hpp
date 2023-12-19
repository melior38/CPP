/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:29:05 by marvin            #+#    #+#             */
/*   Updated: 2023/12/14 17:29:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class ice : public AMateria
{
	public:
	ice();
	ice(const ice &ref);
	virtual ~ice();

	virtual	ice*	clone() const;
	ice	&operator=(const ice &ref);
	private: 
};

#endif