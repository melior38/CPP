/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouchet <asouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 16:59:13 by asouchet          #+#    #+#             */
/*   Updated: 2024/01/05 07:57:34 by asouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern someRandomIntern;
	AForm* form;
	AForm* form2;
	Bureaucrat mike("mike", 1);
	form = someRandomIntern.makeForm("presidential pardon", "The world");
	form2 = someRandomIntern.makeForm("wrong ones", "The world");

	mike.signForm(*form);
	mike.executeForm(*form);
	// mike.signForm(*form2);
	// mike.executeForm(*form2);
	if (form2)
		delete form2;
	delete form;
}