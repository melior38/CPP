/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:22:40 by marvin            #+#    #+#             */
/*   Updated: 2023/11/06 19:22:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "include/main.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "constructor ~PhoneBook called" << std::endl;
	return ;
}

PhoneBook&	PhoneBook::operator=(const PhoneBook& other)
{
	for(int i = 0; i < 8; i++)
	{
		this->_users[i] = other._users[i];
	}
	return *this;
}

PhoneBook::PhoneBook(PhoneBook &other)
{
	std::cout << "constructor PhoneBook called" << std::endl;
	for (int i = 0; i < 8; i++)
		this->_users[i] = other._users[i];	
	return ;
}


PhoneBook::~PhoneBook(void)
{
	std::cout << "destructor ~PhoneBook called" << std::endl;
	return ;
}
