/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouchet <asouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 22:58:52 by asouchet          #+#    #+#             */
/*   Updated: 2024/01/02 23:00:29 by asouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <fstream>

// class Bureaucrat;

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(RobotomyRequestForm const &ref);
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm	&operator=(RobotomyRequestForm const &ref);
		virtual void execute(Bureaucrat const &executor) const;
	private:
		std::string _target;
};

#endif