/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:48:51 by marvin            #+#    #+#             */
/*   Updated: 2023/12/04 14:48:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string say = "HI THIS IS BRAIN";
	std::string *say_ptr = &say;
	std::string &say_ref = say;

	std::cout << "The memory address of string : " << &say << std::endl;
	std::cout << "The memory address of string ptr : " << say_ptr << std::endl;
	std::cout << "The memory address of string ref : " << &say_ref << std::endl;
	std::cout << "string : " << say << std::endl;
	std::cout << "string ptr : " << *say_ptr << std::endl;
	std::cout << "string ref : " << say_ref << std::endl;
	return 0;
}