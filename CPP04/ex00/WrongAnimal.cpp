/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:57:36 by marvin            #+#    #+#             */
/*   Updated: 2023/12/12 18:57:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "includes/WrongAnimal.hpp"

	WrongAnimal::WrongAnimal() : _type("WrongAnimal")
	{

	}

	WrongAnimal::WrongAnimal(const WrongAnimal &ref) 
	{
		*this = ref;
	}

	WrongAnimal::~WrongAnimal()
	{

	}


	WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &ref)
	{
		this->_type = ref.get_type();
		return *this;
	}

	void	WrongAnimal::makeSound() const
	{
		std::cout << "roarrrrrrrrr !" << std::endl;
	}

	std::string WrongAnimal::get_type() const
	{
		return this->_type;
	}
