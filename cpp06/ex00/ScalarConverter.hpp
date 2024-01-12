/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 09:10:42 by marvin            #+#    #+#             */
/*   Updated: 2024/01/11 09:10:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <cstdlib>
#include <cerrno>
#include <cctype> // isprint();
#include <cmath>
#include <climits>

#define CHAR	0
#define INT		1
#define FLOAT	2
#define DOUBLE	3
#define NOTHING -1

class ScalarConverter
{
	public:
		static void convert(std::string val);
	private:
		static char toChar(std::string val);
		static int toInt(std::string val);
		static float toFloat(std::string val);
		static double toDouble(std::string val);
		static void wichType(std::string val, int *type);
		static void writeAll(std::string val, int type);
		static void writeChar(std::string val, int type);
		static void writeInt(std::string val, int type);
		static void writeFloat(std::string val, int type);
		static void writeDouble(std::string val, int type);
		static std::string treated_str(std::string val, int cases);
		static void exception(std::string val, int *type);

		class nonDisplayableException : public std::exception
		{
			private:
				std::string customMessage;

			public:
				nonDisplayableException(const std::string& message) : customMessage(message) {}

				// Override what() method to provide custom message
				const char* what() const throw() 
				{
					return customMessage.c_str();
				}
				~nonDisplayableException() throw() {};
		};

		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(std::string input);
		ScalarConverter(ScalarConverter const &ref);
		ScalarConverter &operator=(ScalarConverter const &ref);
};

#endif