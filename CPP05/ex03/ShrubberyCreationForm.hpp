/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouchet <asouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 22:11:42 by asouchet          #+#    #+#             */
/*   Updated: 2024/01/02 22:59:49 by asouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

// class Bureaucrat;

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(ShrubberyCreationForm const &ref);
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &ref);
		virtual void execute(Bureaucrat const &executor) const;
	private:
		std::string _filename;
};

#endif