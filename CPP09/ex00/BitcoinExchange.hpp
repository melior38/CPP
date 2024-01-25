/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:40:26 by asouchet          #+#    #+#             */
/*   Updated: 2024/01/23 10:57:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <exception>
#include <fstream>

class WrongFormatException : public std::exception
{
	public:
		const char *what() const throw();
};

class NegativeNumberException : public std::exception
{
	public:
		const char *what() const throw();
};

class TooLargeNumberException : public std::exception
{
	public:
		const char *what() const throw();
};

class FailedOpenException : public std::exception
{
	public:
		const char *what() const throw();
};


std::map<std::string, float>	csvToMap(std::string fileName);
void							format(std::string fileName);
void							btcExchange(std::map<std::string, float> csv, std::string filename);

#endif