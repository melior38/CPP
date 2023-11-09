/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouchet <asouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:45:09 by marvin            #+#    #+#             */
/*   Updated: 2023/11/09 15:19:57 by asouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "include/main.hpp"


int	main(int ac, char **av)
{
	(void) ac;
	(void) av;
	std::string line;
	PhoneBook repertory;
	while (true)
	{
		std::cout << "<$ ";
		line = safe_getline();
		if (line == "ADD")
		{
			repertory.add_users();
		}
		if (line == "SEARCH")
		{
			repertory.show_users();
			repertory.search_users(repertory);// a coder
		}
		if (line == "EXIT")
			break ;
	}
	return 0;
}