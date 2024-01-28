/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:57:02 by asouchet          #+#    #+#             */
/*   Updated: 2024/01/28 12:28:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <ctime>
#include <map>
#include <sstream>
#include <exception>


struct compare_tm
{
	bool operator()(const std::tm &a, const std::tm &b) const
	{
		std::time_t	ta = std::mktime(const_cast<tm *>(&a));
		std::time_t tb = std::mktime(const_cast<tm *>(&b));
		return (ta < tb);
	}
};

void	read_csv(std::map<std::tm, float, compare_tm> &data)
{
	float			value;
	std::ifstream	file;
	std::tm			t = {};
	std::string		line;

	file.open("data.csv");
	if (!file.is_open())
		throw std::runtime_error("csv file could not be opened");
	getline(file, line);
	while (getline(file, line))
	{
		char				c;
		std::istringstream	ss(line);

		ss >> t.tm_year >> c >> t.tm_mon >> c >> t.tm_mday >> c >> value;
		t.tm_mon -= 1;
		if (mktime(&t) == -1)
			throw std::runtime_error("wrong time in data_base");
		data.insert(std::pair<std::tm const, float>(t, value));
	}
	file.close();
}

float	find_date(std::map<std::tm, float, compare_tm> &data, std::tm &t)
{
	std::map <std::tm, float, compare_tm>::iterator	iter;
	std::time_t 						day = 24 * 60 * 60;
	std::time_t							tmp_date;
	std::time_t	 						first_date;

	tmp_date = mktime(&t);
	first_date = mktime(const_cast<std::tm *>(&(data.begin()->first)));
	while ((iter = data.find(t)) == data.end() && first_date <= tmp_date)
	{
		tmp_date = mktime(&t) - day;
		t = *localtime(&tmp_date);
	}
	if (first_date > tmp_date)
		return -1;
	return (iter->second);
}

void	BitcoinExchange(std::map<std::tm, float, compare_tm> &data, std::string input)
{
	float			value;
	std::string		line;
	std::ifstream	file;
	std::tm			t = {};
	
	file.open(input.c_str());
	if (!file.is_open())
		throw std::runtime_error("input file could not be opened");
	getline(file, line);
	while (getline(file, line))
	{
		char				c;
		std::istringstream	ss(line);

		ss >> t.tm_year >> c >> t.tm_mon >> c >> t.tm_mday >> c >> value;
		if (ss.fail())
			std::cout << "Error: bad input => " << line << std::endl;
		t.tm_mon -= 1;
		if (value < 0)
			std::cout << "Error: not a positive number." << std::endl;
		else if (mktime(&t) == -1)
			std::cout << "Error: bad input => " << line << std::endl;
		else if (value > 1000)
			std::cout << "Error: too large a number." << std::endl;
		else 
		{
			float multiple = find_date(data, t);
			c = '-';
			if (multiple == -1)
				std::cout << "Error: not in database" << std::endl;
			else
					std::cout << t.tm_year << c << (t.tm_mon + 1) << c << t.tm_mday << " => " << value << " = " << (value * multiple) << std::endl;
		}
	}

}

int main(int ac, char **av)
{
	std::map<std::tm, float, compare_tm> data_map;
	try
	{
		if (ac != 2)
			throw std::runtime_error("Wrong amount of argument !");
		read_csv(data_map);
		BitcoinExchange(data_map, std::string(av[1]));
	}
	catch (std::runtime_error const &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
}
