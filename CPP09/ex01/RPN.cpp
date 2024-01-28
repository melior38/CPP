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

RPN::~RPN()
{

}

RPN::RPN(std::string &oper)
{

}

void	RPN::sub_stack()
{
	int this->_stack.top();
}

void	RPN::add_stack()
{
	int b = this->_stack.top();
	
}

void	RPN::div_stack()
{

}

void	RPN::mult_stack()
{

}

const char *RPN::UnknownCharException() const throw()
{
	return ("Error: wrong char in the RPN operation");
}

const char *RPN::DivisionByZeroException() const throw()
{
	return ("Error: number 0 can't be divided by anything");
}

const char *RPN::InsufficientContentException() const throw()
{
	return ("Error: this operation can't be done because of wrong amount of operator or value");
}

