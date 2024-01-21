/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:02:39 by marvin            #+#    #+#             */
/*   Updated: 2024/01/21 15:02:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
// #include <random>

int main (void)
{
	{
		std::cout << "---------------------------------------------------------------------------------" << std::endl;
		Span sp(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		try {
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "---------------------------------------------------------------------------------" << std::endl;
	}
	{
		std::cout << "---------------------------------------------------------------------------------" << std::endl;
		Span sp = Span(10000);
		for(int i = 1; i <= 10000; i++)
		{
			sp.addNumber(i);
		}

		try {
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "---------------------------------------------------------------------------------" << std::endl;
	}
	{
		std::cout << "---------------------------------------------------------------------------------" << std::endl;
		Span sp(100000);
		for(int i = 1; i <= 100000; i+=2)
		{
			sp.addNumber(i);
		}

		try {
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "---------------------------------------------------------------------------------" << std::endl;
	}
	{
		std::cout << "---------------------------------------------------------------------------------" << std::endl;
		Span sp = Span(500);
		std::vector<unsigned int> tmp;
		for(int i = 1; i <= 400; i+=10)
		{
			tmp.push_back(i);
		}

		try {
			sp.addFromRange(tmp.begin(), tmp.end());
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "---------------------------------------------------------------------------------" << std::endl;
	}
	{
		std::cout << "---------------------------------------------------------------------------------" << std::endl;
		Span sp = Span(500);
		std::vector<unsigned int> tmp;
		for(int i = 1; i <= 4000; i+=1)
		{
			tmp.push_back(i);
		}

		try {
			sp.addFromRange(tmp.begin(), tmp.end());
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "---------------------------------------------------------------------------------" << std::endl;
	}
	// {
	// Span sp = Span(10000);	
	// 	    // Set up a random number generator
    // std::random_device rd;
    // std::mt19937 gen(rd());

    // // Generate a vector of 10,000 unique numbers
    // std::vector<int> numbers(10000);
    // std::iota(numbers.begin(), numbers.end(), 1); // Fill vector with sequential numbers
    // std::shuffle(numbers.begin(), numbers.end(), gen); // Shuffle the vector

    // // Create a stringstream to build the string
    // std::stringstream ss;

    // // Insert numbers into the stringstream, separated by space
    // for (const auto& num : numbers) {
    //     ss << num << " ";
    // }

    // // Get the final string
    // std::string result = ss.str();

    // // Remove the trailing space
    // result.pop_back();
	
	// try {
	// 	sp.addMultiple(result);
	// 	std::cout << sp.shortestSpan() << std::endl;
	// 	std::cout << sp.longestSpan() << std::endl;
	// }
	// catch (std::exception& e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// std::cout << "---------------------------------------------------------------------------------" << std::endl;
	// }
	return 0;
}