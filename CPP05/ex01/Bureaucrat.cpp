/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouchet <asouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 16:59:09 by asouchet          #+#    #+#             */
/*   Updated: 2024/01/01 02:30:28 by asouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() : _name(""), _grade(1)
{

}

Bureaucrat::Bureaucrat(std::string const &name, int const &grade) : _name(name)
{
	try
	{
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else if (grade <= 0)
			throw Bureaucrat::GradeTooHighException();
		else
			this->_grade = grade;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(Bureaucrat const &ref) : _name(ref._name), _grade(ref._grade)
{

}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &ref)
{
	this->_grade = ref._grade;
	return *this;
}

const std::string Bureaucrat::getName() const
{
	return this->_name;
}

int	Bureaucrat::getGrade() const
{
	return this->_grade;
}

void	Bureaucrat::gradeUp()
{
	try
	{
		if (this->_grade == 1)
			throw Bureaucrat::GradeTooHighException();
		else
			this->_grade--;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	Bureaucrat::gradeDown()
{
	try
	{
		if (this->_grade == 150)
			throw Bureaucrat::GradeTooLowException();
		else
			this->_grade++;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void Bureaucrat::signForm(Form &ref)
{
	try
	{
		ref.beSigned(*this);
		std::cout << *this << " signed " << ref << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << *this << " couldn’t sign " << ref << " because " << e.what() << "." << std::endl;
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("The grade is too high, values goes from 150 to 1 and the value you are trying to set will be under grade 1");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("The grade is too low, values goes from 150 to 1 and the value you are trying to set will be over grade 150");
}

std::ostream&	operator<<(std::ostream& os, Bureaucrat const &ref)
{
	os << ref.getName() << ", bureaucrat grade " << ref.getGrade();
	return os;
}
