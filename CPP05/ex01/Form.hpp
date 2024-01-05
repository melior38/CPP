/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouchet <asouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 19:22:12 by asouchet          #+#    #+#             */
/*   Updated: 2024/01/01 02:31:21 by asouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_CPP
# define FORM_CPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
	Form(std::string const &name, int const &sign_r, int const &execute_r);
	~Form();
	Form(Form const &ref);
	Form &operator=(Form const &ref);
	int getSign() const;
	int getExecute() const;
	std::string getName() const;
	std::string getSigned() const;
	void beSigned(Bureaucrat const &ref);
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	private:
	Form();
	std::string _name;
	int	_sign_r;
	int	_execute_r;
	bool _signed;
};

std::ostream&	operator<<(std::ostream& os, Form const &ref);

#endif