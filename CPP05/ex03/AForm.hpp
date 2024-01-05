/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouchet <asouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 19:22:12 by asouchet          #+#    #+#             */
/*   Updated: 2024/01/01 02:31:21 by asouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AFORM_CPP
# define AFORM_CPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
	AForm(std::string const &name, int const &sign_r, int const &execute_r);
	virtual ~AForm();
	AForm(AForm const &ref);
	AForm &operator=(AForm const &ref);
	int getSign() const;
	int getExecute() const;
	std::string getName() const;
	std::string getSigned() const;
	void beSigned(Bureaucrat const &ref);

	virtual void execute(Bureaucrat const &executor) const = 0;

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
	class ExecuteException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class UnsignedException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	private:
	AForm();
	std::string _name;
	int	_sign_r;
	int	_execute_r;
	bool _signed;
};

std::ostream&	operator<<(std::ostream& os, AForm const &ref);

#endif