/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouchet <asouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 16:59:13 by asouchet          #+#    #+#             */
/*   Updated: 2024/01/01 02:32:58 by asouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	{
		Bureaucrat mike("mike the looser", 150);
		std::cout << mike << std::endl;
		mike.gradeDown();
		mike.gradeUp();
		std::cout << mike << std::endl;

		Bureaucrat steve("steve the boss", 1);
		std::cout << steve << std::endl;
		steve.gradeUp();
		steve.gradeDown();
		std::cout << steve << std::endl;

		Bureaucrat coffeeMachine("the coffee machine", 1000);
		Bureaucrat paperClip("the paperclip", -1);
	}
	{
		std::cout << "------------------------------------------------------------------------------" << std::endl;
		try {
			Form		panda_form("the form for the pandas", -1, 25);
		}
		catch(std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "------------------------------------------------------------------------------" << std::endl;
	}
	{
		Bureaucrat	mike("the mike", 20);
		try
		{
			Form		panda_form("the form for the pandas", 25, 25);
			std::cout << panda_form << std::endl;
			std::cout << mike << std::endl;
			mike.signForm(panda_form);
			std::cout << panda_form << std::endl;
		}
		catch(std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}