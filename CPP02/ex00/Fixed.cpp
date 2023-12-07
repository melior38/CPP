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

	Fixed::~Fixed(void)
	{
		std::cout << "Destructor called" << std::endl;
	}

	int		Fixed::getRawBits(void) const
	{
		std::cout << "getRawBits member function called" << std::endl;
		return this->_entier;
	}

	void	Fixed::setRawBits(int const raw)
	{
		this->_entier = raw;
	}