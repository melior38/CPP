/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouchet <asouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 23:52:06 by asouchet          #+#    #+#             */
/*   Updated: 2024/01/01 02:38:41 by asouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name(""), _sign_r(1), _execute_r(1), _signed(false)
{

}

Form::Form(std::string const &name, int const &sign_r, int const &execute_r) : _name(name), _sign_r(sign_r), _execute_r(execute_r), _signed(false)
{
		if(sign_r <= 0 || execute_r <= 0)
		{
			throw Form::GradeTooHighException();
		}
		else if (sign_r > 150 || execute_r > 150)
		{
			throw Form::GradeTooLowException();
		}
}

Form::~Form()
{

}

Form::Form(Form const &ref) : _name(ref._name), _sign_r(ref._sign_r), _execute_r(ref._execute_r), _signed(ref._signed)
{

}

Form &Form::operator=(Form const &ref)
{
	this->_signed = ref._signed;
	this->_sign_r = ref._sign_r;
	this->_execute_r = ref._execute_r;
	return *this;
}

int Form::getSign() const
{
	return this->_sign_r;
}

std::string Form::getName() const
{
	return this->_name;
}

int	Form::getExecute() const
{
	return this->_execute_r;
}

std::string	Form::getSigned() const
{
	if (this->_signed == true)
		return ("signed");
	else
		return ("unsigned");
}

void Form::beSigned(Bureaucrat const &ref)
{
	if (ref.getGrade() <= this->_sign_r)
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("The grade is too high (0 or under) to do any action");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("The grade is too low (over 150) to do any action");
}

std::ostream&	operator<<(std::ostream& os, Form const &ref)
{
	os << "contract : " << ref.getName() << ", sign grade : " << ref.getSign() << ", execute grade : " << ref.getExecute() << ", status : " << ref.getSigned();
	return os;
}
