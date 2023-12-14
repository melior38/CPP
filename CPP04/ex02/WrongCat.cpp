/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 19:01:05 by marvin            #+#    #+#             */
/*   Updated: 2023/12/12 19:01:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "includes/WrongCat.hpp"

	WrongCat::WrongCat() : _type("WrongCat")
	{

	}

	WrongCat::WrongCat(const WrongCat &ref) : WrongAnimal()
	{
		this->_type = ref.get_type();
	}

	WrongCat::~WrongCat()
	{

	}


	WrongCat	&WrongCat::operator=(const WrongCat &ref)
	{
		this->_type = ref.get_type();
		return *this;
	}

	void	WrongCat::makeSound() const
	{
		std::cout << "miaou !" << std::endl;
	}

	std::string WrongCat::get_type() const
	{
		return this->_type;
	}
