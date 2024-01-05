/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouchet <asouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 06:47:22 by asouchet          #+#    #+#             */
/*   Updated: 2024/01/05 07:55:50 by asouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <map>

Intern::Intern() : _form_name("default Form"), _target("should not be handle")
{

}

Intern::Intern(std::string const &form_name, std::string const &target) : _form_name(form_name), _target(target)
{

}

Intern::Intern(Intern const &ref) : _form_name(ref._form_name), _target(ref._target)
{

}

Intern &Intern::operator=(Intern const &ref)
{
	this->_form_name = ref._form_name;
	this->_target = ref._target;
	return *this;
}

Intern::~Intern()
{

}



// AForm	*Intern::create_ptr(int c, std::string const &target)
// {
// 	if (!this->_mp[0])
// 		this->_mp[0] = new ShrubberyCreationForm(target);
// 	else
// 	{
// 		delete this->_mp[0];
// 		this->_mp[0] = NULL;
// 		this->_mp[0] = new ShrubberyCreationForm(target);
// 	}
// 	if (!this->_mp[1])
// 		this->_mp[1] = new RobotomyRequestForm(target);
// 	else
// 	{
// 		delete this->_mp[1];
// 		this->_mp[1] = NULL;
// 		this->_mp[1] = new RobotomyRequestForm(target);
// 	}
// 	if (!this->_mp[2])
// 		this->_mp[2] = new PresidentialPardonForm(target);
// 	else
// 	{
// 		delete this->_mp[2];
// 		this->_mp[2] = NULL;
// 		this->_mp[2] = new PresidentialPardonForm(target);
// 	}
// 	return (this->_mp[c]);	
// }

// void	Intern::isForm(std::string const &form, int *c)
// {
	
// }

AForm	*Intern::makeForm(std::string const &form_name, std::string const &target)
{
	try
	{
		const int numOfForms = 3;
		AForm* ret = 0;
		std::string possibleForms[numOfForms] = {"shrubbery creation", "robotomy request", "presidential pardon"};
		int form = -1;
		for(int i = 0; i < numOfForms; i++)
		{
			if(possibleForms[i] == form_name)
			{
				form = i;
				break;
			}
		}
		switch(form)
		{
			case 0:
				ret = new ShrubberyCreationForm(target);
				break;
			case 1:
				ret = new RobotomyRequestForm(target);
				break;
			case 2:
				ret = new PresidentialPardonForm(target);
				break;
			default:
				throw Intern::NonExistentFormException();
		}
		std::cout << "Intern creates " << ret->getName() << std::endl;
		return ret;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
		return NULL;
	}
}

const char *Intern::NonExistentFormException::what() const throw()
{
	return "the Form name provided is non existent pls ensure to be using one of the existing ones !";
}
