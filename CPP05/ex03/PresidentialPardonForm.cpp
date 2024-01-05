/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouchet <asouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 23:09:16 by asouchet          #+#    #+#             */
/*   Updated: 2024/01/02 23:39:47 by asouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("default PresidentialPardonForm", 25, 5), _target("no-name")
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &ref) : AForm(ref.getName(), ref.getSign(), ref.getExecute()), _target(ref._target)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &ref)
{
	this->_target = ref._target;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->getSigned() == "unsigned")
		throw AForm::UnsignedException();
	else if (executor.getGrade() > this->getExecute())
		throw AForm::ExecuteException();
	else
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
