/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:05:47 by marvin            #+#    #+#             */
/*   Updated: 2024/01/21 15:05:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <exception>
#include <vector>
#include <list>
#include <sstream>

class Span
{
	public:
		Span(unsigned int n);
		void	addNumber(unsigned int n);
		// void	addMultiple(std::string numberlist);
		void	addFromRange(std::vector<unsigned int>::iterator beg, std::vector<unsigned int>::iterator end);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		class SameNumberException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		class NotEnoughElementsException: public std::exception
		{
			public:
			const char * what() const throw();
		};
		class NotEnoughSpaceException: public std::exception
		{
			public:
			const char * what() const throw();
		};
		~Span();
		Span();
		Span(Span const &ref);
		Span &operator=(Span const &ref);
	private:
		std::vector<unsigned int> _vector;
};

#endif