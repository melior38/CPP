/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 09:10:37 by marvin            #+#    #+#             */
/*   Updated: 2024/01/11 09:10:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


void ScalarConverter::convert(std::string val)
{
	int type = 0;
	wichType(treated_str(val, 1), &type);
	exception(treated_str(val, 2), &type);
	writeAll(treated_str(val, 2), type);	
}

char ScalarConverter::toChar(std::string val)
{
	if (val.length() != 1 || std::isdigit(val[0]))
		return (-1);
	char res = val[0];
	return res;
}

int ScalarConverter::toInt(std::string val)
{
	const char * const	start_ptr = val.c_str();
	char *				end_ptr;
	long int			long_res;

	long_res = std::strtol(start_ptr, &end_ptr, 0);
	if (*end_ptr != '\0')
		throw ScalarConverter::nonDisplayableException("impossible");
	if (long_res < static_cast<long int>(INT_MIN) || long_res > static_cast<long int>(INT_MAX))
		throw ScalarConverter::nonDisplayableException("impossible");
	return static_cast<int>(long_res);
}

float ScalarConverter::toFloat(std::string val)
{
	const char * const	start_ptr = val.c_str();
	char *				end_ptr;
	double				double_res;

	double_res = std::strtod(start_ptr, &end_ptr);
	if (*(end_ptr + 1) != '\0')
		throw ScalarConverter::nonDisplayableException("impossible");
	if (errno == ERANGE)
		throw ScalarConverter::nonDisplayableException("impossible");
	return static_cast<float>(double_res);
}

double ScalarConverter::toDouble(std::string val)
{
	const char * const	start_ptr = val.c_str();
	char *				end_ptr;
	double				double_res;

	double_res = std::strtod(start_ptr, &end_ptr);
	if (*(end_ptr) != '\0')
		throw ScalarConverter::nonDisplayableException("impossible");
	if (errno == ERANGE)
		throw ScalarConverter::nonDisplayableException("impossible");
	return static_cast<double>(double_res);
}

void ScalarConverter::writeAll(std::string val, int type)
{
	for (int i = 0; i != 4;)
	{
		try
		{
			switch(i)
			{
				case 0:
					writeChar(val, type);
					i++;
					break;
				case 1:
					writeInt(val, type);
					i++;
					break;
				case 2:
					writeFloat(val, type);
					i++;
					break;
				case 3:
					writeDouble(val, type);
					i++;
					break;
			}
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
			i++;
		}
	}
}

void ScalarConverter::writeChar(std::string val, int type)
{
	int	possible = false;
	char ret;
	
	std::cout << "char:	"; 
	if (CHAR == type)
	{
		char c = toChar(val);
		possible = true;
		ret = static_cast<char>(c);
	}
	else if (INT == type)
	{
		int i = toInt(val);
		if (i >= static_cast<int>(CHAR_MIN) || i <= static_cast<int>(CHAR_MAX))
		{
			possible = true;
			ret = static_cast<char>(i);
		}
	}
	else if (FLOAT == type)
	{
		float f = toFloat(val);
		if (!std::isnan(f) && (f >= static_cast<float>(CHAR_MIN) && f <= static_cast<float>(CHAR_MAX)))
		{
			possible = true;
			ret = static_cast<char>(f);
		}
	}
	else if (DOUBLE == type)
	{
		double d = toDouble(val);
		if (!std::isnan(d) && (d >= static_cast<double>(CHAR_MIN) && d <= static_cast<double>(CHAR_MAX)))
		{
			possible = true;
			ret = static_cast<char>(d);
		}
	}
	else if (NOTHING == type)
		throw ScalarConverter::nonDisplayableException("impossible");
	if (!possible)
		throw ScalarConverter::nonDisplayableException("impossible");
	if (!std::isprint(ret))
		throw ScalarConverter::nonDisplayableException("Non displayable");
	else
		std::cout << "'" << ret << "'";
	std::cout << std::endl;
}

void ScalarConverter::writeInt(std::string val, int type)
{
	std::cout << "int:	"; 
	if (CHAR == type)
	{
		char c = toChar(val);
		std::cout << static_cast<int>(c);
	}
	else if (INT == type)
	{
		int i = toInt(val);
		std::cout << static_cast<int>(i);
	}
	else if (FLOAT == type)
	{
		float f = toFloat(val);
		if (!std::isnan(f) && (f >= static_cast<float>(INT_MIN) && f <= static_cast<float>(INT_MAX)))
			std::cout << static_cast<int>(f);
		else
			std::cout << "impossible";
	}
	else if (DOUBLE == type)
	{
		double d = toDouble(val);
		if (!std::isnan(d) && (d >= static_cast<double>(INT_MIN) && d <= static_cast<double>(INT_MAX)))
			std::cout << static_cast<int>(d);
		else
			std::cout << "impossible";
	}
	else if (NOTHING == type)
		std::cout << "impossible";
	std::cout << std::endl;
}

void ScalarConverter::writeFloat(std::string val, int type)
{
	std::cout << "float:	";
	std::cout<<std::fixed;
	std::streamsize ss = std::cout.precision(1);
	if (CHAR == type)
	{
		char c = toChar(val);
		std::cout << static_cast<float>(c) << "f";
	}
	else if (INT == type)
	{
		int i = toInt(val);
		std::cout << static_cast<float>(i) << "f";
	}
	else if (FLOAT == type)
	{
		float f = toFloat(val);
		std::cout << static_cast<float>(f) << "f";
	}
	else if (DOUBLE == type)
	{
		double d = toDouble(val);
		std::cout << static_cast<float>(d) << "f";
	}
	else if (NOTHING == type)
		std::cout << "impossible";

	std::cout << std::endl;
	std::cout.precision(ss);
	std::cout.unsetf(std::ios_base::floatfield);
}

void ScalarConverter::writeDouble(std::string val, int type)
{
	std::cout << "double:	"; 
	std::cout<<std::fixed;
	std::streamsize ss = std::cout.precision(1);
	if (CHAR == type)
	{
		char c = toChar(val);
		std::cout << static_cast<double>(c);
	}
	else if (INT == type)
	{
		int i = toInt(val);
		std::cout << static_cast<double>(i);
	}
	else if (FLOAT == type)
	{
		float f = toFloat(val);
		std::cout << static_cast<double>(f);
	}
	else if (DOUBLE == type)
	{
		double d = toDouble(val);
		std::cout << static_cast<double>(d);
	}
	else if (NOTHING == type)
		std::cout << "impossible";
	std::cout << std::endl;
	std::cout.precision(ss);
	std::cout.unsetf(std::ios_base::floatfield);
}

void ScalarConverter::wichType(std::string val ,int *type)
{
	if(val.length() != 1 && val[val.length() - 1] == 'f')
		*type = FLOAT;
	else if (val.find('.') != static_cast<size_t>(-1))
	{
		if (val.find('.') == static_cast<size_t>(val.length() - 1))
			*type = NOTHING;
		else
			*type = DOUBLE;
	}
	else
	{
		int i = 0;
		while (val[i])
		{
			if (std::isdigit(val[i]) == true)
				i++;
			else
				break ;
		}
		if (val.length() > 10)
			*type = DOUBLE;
		else if (static_cast<long unsigned int>(i) == val.length())
			*type = INT;
		else
		{
			if (val.length() == 1)
				*type = CHAR;
			else
				*type = NOTHING;
		}
	}
}

std::string ScalarConverter::treated_str(std::string val, int cases)
{
	int i = 0;
	std::string ret = val;

	if (val.length() == 1)
		return val;
	while (ret[i] && std::isspace(ret[i]))
		i++;
	ret.erase(0, i);
	i = 0;
	std::string whith_sign = ret;	
	if (ret[i] == '-' || ret[i] == '+')
		ret.erase(i, 1);
	if (ret[ret.length() - 1] == 'f')
	{
		whith_sign.erase(whith_sign.length() - 1, 1);
		ret.erase(ret.length() - 1, 1);
	}
	if (cases == 1)
		return ret;
	else
		return whith_sign;
}

void ScalarConverter::exception(std::string val, int *type)
{
	if (val == "nan" || val == "-nan" || val == "+nan" || val == "inf" || val == "-inf" || val == "+inf")
		*type = DOUBLE;
	else if (val == "nanf" || val == "-nanf" || val == "+nanf" || val == "inff" || val == "-inff" || val == "+inff")
		*type = FLOAT;
}

