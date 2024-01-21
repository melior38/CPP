/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:19:28 by marvin            #+#    #+#             */
/*   Updated: 2024/01/21 15:19:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n)
{
	_vector.reserve(n);
}

void	Span::addNumber(unsigned int n)
{
	std::vector<unsigned int>::iterator find = std::find(this->_vector.begin(), this->_vector.end(), n); 
	if (find != this->_vector.end())
		throw Span::SameNumberException();
	this->_vector.push_back(n);
}

// void	Span::addMultiple(std::string numberlist)
// {
//     // Create a stringstream object from the input string
//     for (unsigned int i = 0; i < numberlist.length(); i++)
// 	{
// 		if (numberlist[i] != 32 && (numberlist[i] < '0' && numberlist[i] > '9'))
// 		{
// 			std::cout << "wrong format of list pls provide only numbers and spaces" << std::endl;
// 			return ;
// 		}
// 	}
// 	std::istringstream iss(numberlist);
// 	std::vector<unsigned int>::iterator find;
//     unsigned int number;

//     while (iss >> number) 
// 	{
//         // 'number' now contains the extracted integer
// 		find = std::find(this->_vector.begin(), this->_vector.end(), number); 
// 		if (find != this->_vector.end())
// 			throw Span::SameNumberException();
// 		this->_vector.push_back(number);
//     }
// }

void Span::addFromRange(std::vector<unsigned int>::iterator beg, std::vector<unsigned int>::iterator end)
{
	if(static_cast<unsigned long>(std::distance(beg, end)) > this->_vector.capacity() - this->_vector.size())
	{
		throw NotEnoughSpaceException();
	}
	std::copy(beg, end, std::back_inserter(this->_vector));
}

unsigned int Span::shortestSpan()
{
	if(this->_vector.size() < 2)
		throw NotEnoughElementsException();
	unsigned int number = *this->_vector.begin();
	for (std::vector<unsigned int>::iterator it = this->_vector.begin(); it != this->_vector.end(); ++it)
	{
		if (*it < number)
			number = *it;
	}
	return number;
}

unsigned int Span::longestSpan()
{
	if(this->_vector.size() < 2)
		throw NotEnoughElementsException();
	unsigned int number = *this->_vector.begin();
	for (std::vector<unsigned int>::iterator it = this->_vector.begin(); it != this->_vector.end(); ++it)
	{
		if (*it > number)
			number = *it;
	}
	return number;
}

const char *Span::SameNumberException::what() const throw()
{
	return ("this range is already in the Span class");
}

const char *Span::NotEnoughElementsException::what() const throw()
{
	return ("this Span has not enough elements");
}

const char *Span::NotEnoughSpaceException::what() const throw()
{
	return "The Span has not enough space to insert elements";
}

Span::Span() 
{
	_vector.reserve(0);
}

Span::Span(Span const &ref)
{
	std::vector<unsigned int>::const_iterator strt = ref._vector.begin();
	std::vector<unsigned int>::const_iterator end = ref._vector.end();
	for(;strt != end; ++strt)
	{
		this->_vector.push_back(*strt);
	}
}

Span &Span::operator=(Span const &ref)
{
	std::vector<unsigned int>::const_iterator strt = ref._vector.begin();
	std::vector<unsigned int>::const_iterator end = ref._vector.end();
	for(;strt != end; ++strt)
	{
		this->_vector.push_back(*strt);
	}
	return (*this);
}

Span::~Span()
{
	this->_vector.clear();
}
