/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:12:53 by marvin            #+#    #+#             */
/*   Updated: 2024/01/28 16:12:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RPN.hpp"

RPN::RPN()
{

}

RPN::~RPN()
{
	
}

RPN::RPN(const RPN &src)
{
	(void) src;
}

RPN &RPN::operator=(const RPN &src)
{
	(void) src;
	return *this;
}

RPN::RPN(std::string &oper)
{
	int n = 0;
	int m = 0;
	for (int i = 0; oper[i]; i++)
	{
		if (oper[i] >= '0' && oper[i] <= '9')
			n++;
		else if (is_oper(oper[i]))
			m++;
		else if (oper[i] == 32 )
			continue ;
		else
			throw UnknownCharException();
	}
	// std::cout << n << " and " << m << std::endl;
	if (n != m + 1)
		throw InsufficientContentException();
	for (int i = 0; oper[i]; i++)
	{
		if (oper[i] >= '0' && oper[i] <= '9')
			this->_stack.push(oper[i] - '0');
		if (oper[i] == '+')
			this->add_stack();
		else if (oper[i] == '-')
			this->sub_stack();
		else if (oper[i] == '/')
			this->div_stack();
		else if (oper[i] == '*')
			this->mult_stack();
		else
			continue ;
	}
	std::cout << this->_stack.top() << std::endl;
}


void	RPN::sub_stack()
{
	int b = this->_stack.top();
	this->_stack.pop();
	int a = this->_stack.top();
	this->_stack.pop();
	std::cout << a << " - " << b << std::endl;
	this->_stack.push(a - b);
}

void	RPN::add_stack()
{
	int b = this->_stack.top();
	this->_stack.pop();
	int a = this->_stack.top();
	this->_stack.pop();
	std::cout << a << " + " << b << std::endl;
	this->_stack.push(a + b);
}

void	RPN::div_stack()
{
	int b = this->_stack.top();
	this->_stack.pop();
	int a = this->_stack.top();
	this->_stack.pop();
	if (a == 0)
		throw DivisionByZeroException();
	std::cout << a << " / " << b << std::endl;
	this->_stack.push(a / b);
}

void	RPN::mult_stack()
{
	int b = this->_stack.top();
	this->_stack.pop();
	int a = this->_stack.top();
	this->_stack.pop();
	std::cout << a << " * " << b << std::endl;
	this->_stack.push(a * b);
}

const char *RPN::UnknownCharException::what() const throw()
{
	return ("Error: wrong char in the RPN operation");
}

const char *RPN::DivisionByZeroException::what() const throw()
{
	return ("Error: number 0 can't be divided by anything");
}

const char *RPN::InsufficientContentException::what() const throw()
{
	return ("Error: this operation can't be done because of wrong amount of operator or value");
}

int	is_oper(char a)
{
	if (a == '+' || a == '*' || a == '/' || a == '-')
		return 1;
	return 0;
}
