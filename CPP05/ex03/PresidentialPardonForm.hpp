/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouchet <asouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 23:09:25 by asouchet          #+#    #+#             */
/*   Updated: 2024/01/02 23:10:42 by asouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <fstream>

// class Bureaucrat;

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string const &target);
		PresidentialPardonForm(PresidentialPardonForm const &ref);
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm	&operator=(PresidentialPardonForm const &ref);
		virtual void execute(Bureaucrat const &executor) const;
	private:
		std::string _target;
};

#endif