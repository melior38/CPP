/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:51:10 by marvin            #+#    #+#             */
/*   Updated: 2024/01/28 15:51:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main (int ac, char **av)
{
	if (ac == 2)
	{
		try
		{
				std::string str(av[1]);
				RPN oper(str);
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	else 
		std::cout << "Error: wrong format !" << std::endl;
	return 0;
	
}