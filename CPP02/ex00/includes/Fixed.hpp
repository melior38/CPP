/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 19:57:47 by marvin            #+#    #+#             */
/*   Updated: 2023/12/06 19:57:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
	Fixed(void);
	// Fixed(int const n);
	Fixed(Fixed const &ref);
	~Fixed(void);

	Fixed	&operator=(Fixed const &ref);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	private:

	int	_entier;
	static int const _bits = 8;

};

#endif