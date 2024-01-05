/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouchet <asouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 23:52:06 by asouchet          #+#    #+#             */
/*   Updated: 2024/01/02 23:41:17 by asouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name(""), _sign_r(1), _execute_r(1), _signed(false)
{

}

AForm::AForm(std::string const &name, int const &sign_r, int const &execute_r) : _name(name), _sign_r(sign_r), _execute_r(execute_r), _signed(false)
{
		if(sign_r <= 0 || execute_r <= 0)
		{
			throw AForm::GradeTooHighException();
		}
		else if (sign_r > 150 || execute_r > 150)
		{
			throw AForm::GradeTooLowException();
		}
}

AForm::~AForm()
{

}

AForm::AForm(AForm const &ref) : _name(ref._name), _sign_r(ref._sign_r), _execute_r(ref._execute_r), _signed(ref._signed)
{

}

AForm &AForm::operator=(AForm const &ref)
{
	this->_signed = ref._signed;
	this->_sign_r = ref._sign_r;
	this->_execute_r = ref._execute_r;
	return *this;
}

int AForm::getSign() const
{
	return this->_sign_r;
}

std::string AForm::getName() const
{
	return this->_name;
}

int	AForm::getExecute() const
{
	return this->_execute_r;
}

std::string	AForm::getSigned() const
{
	if (this->_signed == true)
		return ("signed");
	else
		return ("unsigned");
}

void AForm::beSigned(Bureaucrat const &ref)
{
	if (ref.getGrade() <= this->_sign_r)
		this->_signed = true;
	else
		throw AForm::GradeTooLowException();
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("The grade is too high (0 or under) to do any action");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("The grade is too low (over 150) to do any action");
}

const char *AForm::ExecuteException::what() const throw()
{
	return ("the Bureaucrat grade is too low to execute this file");
}

const char *AForm::UnsignedException::what() const throw()
{
	return ("The form given isn't signed so you can't execute it");
}

std::ostream&	operator<<(std::ostream& os, AForm const &ref)
{
	os << "contract : " << ref.getName() << ", sign grade : " << ref.getSign() << ", execute grade : " << ref.getExecute() << ", status : " << ref.getSigned();
	return os;
}
