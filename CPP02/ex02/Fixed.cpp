/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 20:39:18 by marvin            #+#    #+#             */
/*   Updated: 2023/12/06 20:39:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Fixed.hpp"

static float power(float base, int n) 
{
	float result = 1.0;
		if (n == 0) 
			return 1.0;
		// Handle negative exponents
		if (n < 0) 
	{
		base = 1.0 / base;
			n = -n;
	}
		// Calculate power using repeated multiplication
		while (n > 0) 
	{
		result *= base;
			// Check for potential overflow
			if (result == INFINITY || result == 0.0) {
				break;
		}
			n--;
    }
    return result;
}

Fixed

Fixed::Fixed(void) : _entier(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &ref)
{
	std::cout << "Copy assignment operator called" << std::endl;
		this->_entier = ref.getRawBits();
		return *this;
}

Fixed::Fixed(Fixed const &ref) 
{
	std::cout << "Copy constructor called" << std::endl;
	*this = ref;
}

Fixed::Fixed(float const n)
{
	std::cout << "Float constructor called" << std::endl;
	this->_entier = (int) (n * power(2, this->_bits));
}

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called" << std::endl;
		this->_entier = (int) (n * power(2, this->_bits));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
		return this->_entier;
}

void	Fixed::setRawBits(int const n)
{
	this->_entier = n;
}

float	Fixed::toFloat( void ) const
{
	return ((float)(this->_entier * power(2, (-1) * this->_bits)));
}

int		Fixed::toInt( void ) const
{
	return ((int)(this->_entier * power(2, (-1) * this->_bits)));
}


std::ostream	&operator<<(std::ostream &o, Fixed const &ref)
{
	o << ref.toFloat();
	return o;
}

Fixed	Fixed::operator+(Fixed const &ref) const
{
	float tmp = this->toFloat() + ref.toFloat();
	return (Fixed(tmp));
}

Fixed	Fixed::operator-(Fixed const &ref) const
{
	float tmp = this->toFloat() - ref.toFloat();
	return (Fixed(tmp));
}

Fixed	Fixed::operator*(Fixed const &ref) const
{
	float tmp = this->toFloat() * ref.toFloat();
	return (Fixed(tmp));
}

Fixed	Fixed::operator/(Fixed const &ref) const
{
	float tmp = this->toFloat() / ref.toFloat();
	return (Fixed(tmp));
}

bool	Fixed::operator==(Fixed const &ref) const
{
	return (this->_entier == ref.getRawBits());
}

bool	Fixed::operator!=(Fixed const &ref) const
{
	return (this->_entier != ref.getRawBits());
}

bool	Fixed::operator<(Fixed const &ref) const
{
	return (this->_entier < ref.getRawBits());
}

bool	Fixed::operator>(Fixed const &ref) const
{
	return (this->_entier > ref.getRawBits());
}

bool	Fixed::operator>=(Fixed const &ref) const
{
	return (this->_entier >= ref.getRawBits());
}

bool	Fixed::operator<=(Fixed const &ref) const
{
	return (this->_entier <= ref.getRawBits());
}

Fixed	&Fixed::operator++()
{
	++(this->_entier);
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);
	++(this->_entier);
	return tmp;
}

Fixed	&Fixed::operator--()
{
	--(this->_entier);
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);
	--(this->_entier);
	return tmp;
}
