/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouchet <asouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 06:47:18 by asouchet          #+#    #+#             */
/*   Updated: 2024/01/05 07:43:41 by asouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INTERN_CPP
# define INTERN_CPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Intern
{
	public:
		Intern();
		Intern(std::string const &form_name, std::string const &target);
		Intern(Intern const &ref);
		~Intern();
		Intern	&operator=(Intern const &ref);
		AForm	*makeForm(std::string const &form, std::string const &target);
		// AForm	*create_ptr(int c, std::string const &target);
		// void	isForm(std::string const &form, int *c);
		class NonExistentFormException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
	private:
		// std::map<int, AForm *>_mp;
		std::string _form_name;
		std::string _target;
};

std::ostream&	operator<<(std::ostream& os, Bureaucrat const &ref);

#endif