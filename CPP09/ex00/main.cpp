/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouchet <asouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:57:02 by asouchet          #+#    #+#             */
/*   Updated: 2024/01/25 14:30:58 by asouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <ctime>
#include <map>
#include <sstream>
#include <exception>

void	read_csv(std::map<std::tm, float> &data)
{
	float			value;
	std::ofstream	file;
	std::tm			t = {};

	file.open("data.csv");
	if (!file.is_open())
		throw std::runtime_error("csv file could not be opened");
	std::string line = getline(file, line);
	while (getline(file, line))
	{
		char				c;
		std::istringstream	ss;

		ss >> t.tm_year >> c >> t.tm_mon >> c >> t.tm_mday >> c >> value;
		t.tm_mon -= 1;
		if (mktime(&t) == -1)
			throw std::runtime_error("wrong time in data_base");
		data.insert(std::pair<std::tm const, float>(t, value));
	}
	file.close();
}

float	find_date(std::map<std::tm, float> &data)
{
	std::time_t day = 24 * 60 * 60;
	std::time_t	tmp_date;
	std::time_t	 first_date;
}

void	BitcoinExchange(std::map<std::tm, float> &data, std::string input)
{
	float			value;
	std::string		line;
	std::ofstream	file;
	std::tm			t = {};
	
	file.open(input);
	if (!file.is_open())
		throw std::runtime_error("input file could not be opened");
	getline(file, line);
	while (getline(file, line))
	{
		char				c;
		std::istringstream	ss;

		ss >> t.tm_year >> c >> t.tm_mon >> c >> t.tm_mday >> c >> value;
		if (ss.fail())
			std::cout << "Error: bad input => " << line << std::endl;
		t.tm_mon -= 1;
		if (mktime(&t) == -1)
			std::cout << "Error: bad input => " << line << std::endl;
		else if (value < 0)
			std::cout << "Error: not a positive number." << std::endl;
		else if (value > 1000)
			std::cout << "Error: too large a number." << std::endl;
		float multiple = find_date(data);
		c = '-';
		if (multiple == -1)
			std::cout << "Error: not in database" << std::endl;
		else
				std::cout << t.tm_year << c << (t.tm_mon + 1) << c << t.tm_mday << " => " << value << " = " << (value * multiple) << std::endl;
	}

}

int main(int ac, char **av)
{
	std::map<std::tm, float> data_map;
	try
	{
		if (ac != 2)
			throw std::runtime_error("Wrong amount of argument !");
		read_csv(data_map);
		BitcoinExchange(data_map, std::string(av[1]))
	}
	catch (std::runtime_error const &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
}
