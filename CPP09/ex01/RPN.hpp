/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:10:27 by marvin            #+#    #+#             */
/*   Updated: 2024/01/28 16:10:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <exception>

class RPN
{
public:
	~RPN();
	RPN(std::string &oper);
	void	sub_stack();
	void	add_stack();
	void	div_stack();
	void	mult_stack();
	class UnknownCharException : public std::exception
	{
	public:
		const char * what() const throw();
	};
	class DivisionByZeroException : public std::exception
	{
	public:
		const char * what() const throw();
	};
	class InsufficientContentException : public std::exception
	{
	public:
		const char * what() const throw();
	};
	class WrongFormatException : public std::exception
	{
	public:
		const char * what() const throw();
	};
private:
	RPN();
	RPN(const RPN &src);
	RPN &operator=(const RPN &src);
	std::stack<int> _stack;
};

int	is_oper(char a);

#endif