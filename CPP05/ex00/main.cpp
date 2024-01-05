/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouchet <asouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 16:59:13 by asouchet          #+#    #+#             */
/*   Updated: 2023/12/29 19:18:40 by asouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat daniel("Daniel", 1);
	daniel.gradeUp();
	for (int i = 1; i != 150; i++)
		daniel.gradeDown();
	daniel.gradeDown();
	std::cout << daniel << std::endl;
	Bureaucrat alan(daniel);
	std::cout << alan << std::endl;
	for (int i = 1; i != 150; i++)
		alan.gradeUp();
	std::cout << alan << std::endl;
	return 0;
}