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
#include "main.hpp"

PhoneBook::PhoneBook(Contact *tab)
{
	std::cout << "constructor PhoneBook called" << std::endl;
	for (int i = 0, tab[i], i++)
		this->_tab[i] = tab[i]
	return ;
}


PhoneBook::PhoneBook(void)
{
	std::cout << "destructor ~PhoneBook called" << std::endl;
	return ;
}