/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:29:09 by marvin            #+#    #+#             */
/*   Updated: 2023/12/05 16:29:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	opening_file(std::ifstream &myfile, char *str, int ac)
{
	if (ac != 4)
	{
		std::cout << "wrong amount of argument pls enter filename - s1 - s2 !" << std::endl;
		return 1;
	}
	myfile.open(str);
	if (!myfile.is_open())
	{
		std::cout << "wrong file name !" << std::endl;
		return 1;
	}
	return 0;
}

std::string	copy_file(std::ifstream &myfile)
{
	std::string		line;
	std::string		ret;
	while (getline (myfile,line))
		ret += (line + '\n');
	return ret;
}

void ft_replace(std::string content, char *file_name, std::string s1, std::string s2)
{
	std::string		new_name = file_name;
	std::ofstream	new_file;
	std::size_t		found = 1;

	new_name += ".replace";
	new_file.open(new_name.c_str());        
	found = content.find(s1);
	while(found != std::string::npos)
	{
		content.erase(found, s1.length());
		content.insert(found, s2);
		found = content.find(s1, found + 1);
	}
	new_file << content;
	new_file.close();
}

int	main(int ac, char **av)
{
	std::string s1;
	std::string s2;
	std::ifstream	myfile;

	if (opening_file(myfile, av[1], ac))
		return 1;
	s1 = av[2];
	s2 = av[3];
	ft_replace(copy_file(myfile), av[1], s1, s2);
	return 0;
}