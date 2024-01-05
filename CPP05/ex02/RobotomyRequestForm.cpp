/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouchet <asouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 22:58:23 by asouchet          #+#    #+#             */
/*   Updated: 2024/01/02 23:39:36 by asouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("default RobotomyRequestForm", 72, 45), _target("no-name")
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &ref) : AForm(ref.getName(), ref.getSign(), ref.getExecute()), _target(ref._target)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &ref)
{
	this->_target = ref._target;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->getSigned() == "unsigned")
		throw AForm::UnsignedException();
	else if (executor.getGrade() > this->getExecute())
	{
		std::cout << "bureaucrat grade : "<< executor.getGrade() << " and form requiered grade :" << this->getExecute() << std::endl; 
		throw AForm::ExecuteException();
	}
	else
	{
		int rand = std::rand() % 2;
		if(rand)
		{
			std::cout << this->_target << " has been robotomised !" << std::endl;
		}
		else
		{
			std::cout << this->_target << " has not been robotomised, process failed !" << std::endl;
		}
	}
}
