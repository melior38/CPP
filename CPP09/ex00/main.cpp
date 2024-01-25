/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:57:02 by asouchet          #+#    #+#             */
/*   Updated: 2024/01/23 10:58:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

const char *WrongFormatException::what() const throw()
{
	return ("please make sure to have only \"date | amount\" in the input file");
}

const char *NegativeNumberException::what() const throw()
{
	return ("Error: not a positive number.");
}

const char *TooLargeNumberException::what() const throw()
{
	return "Error: too large a number.";
}

const char *FailedOpenException::what() const throw()
{
	return "can't open a file";
}

std::map<std::string, float>	csvToMap(std::string fileName)
{
	ofstream myfile;

	myfile.open("data.csv");
	if (!myfile.is_open())
		throw FailedOpenException();
	
	
}
