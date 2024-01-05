/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouchet <asouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 16:59:11 by asouchet          #+#    #+#             */
/*   Updated: 2024/01/05 07:51:13 by asouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CPP
# define BUREAUCRAT_CPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	public:
	Bureaucrat(std::string const &name, int const &grade);
	~Bureaucrat();
	Bureaucrat(Bureaucrat const &ref);
	Bureaucrat &operator=(Bureaucrat const &ref);
	const std::string getName() const;
	int	getGrade() const;
	void	gradeUp();
	void	gradeDown();
	void	signForm(AForm &ref);
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
	class SegvException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	void executeForm(AForm const & form);

	private:
	Bureaucrat();
	const std::string _name;
	int	_grade;
};

std::ostream&	operator<<(std::ostream& os, Bureaucrat const &ref);

#endif