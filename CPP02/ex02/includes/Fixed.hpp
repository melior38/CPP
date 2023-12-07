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
#include <cmath>

class Fixed
{
	public:
	Fixed(void);
	Fixed(int const n);
	Fixed(float const n);
	Fixed(Fixed const &ref);
	~Fixed(void);

	Fixed	&operator=(Fixed const &ref);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	Fixed	operator+(Fixed const &ref) const;
	Fixed	operator-(Fixed const &ref) const;
	Fixed	operator*(Fixed const &ref) const;
	Fixed	operator/(Fixed const &ref) const;
	bool	operator==(Fixed const &ref) const;
	bool	operator!=(Fixed const &ref) const;
	bool	operator<(Fixed const &ref) const;
	bool	operator>(Fixed const &ref) const;
	bool	operator>=(Fixed const &ref) const;
	bool	operator<=(Fixed const &ref) const;
	Fixed	&operator++();
	Fixed	operator++(int);
	Fixed	&operator--();
	Fixed	operator--(int);
	Fixed	max(Fixed &a, Fixed &b);
	private:
	int	_entier;
	static int const _bits = 8;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &ref);

#endif

