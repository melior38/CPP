/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouchet <asouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 22:11:37 by asouchet          #+#    #+#             */
/*   Updated: 2024/01/02 23:31:33 by asouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("default ShrubberyCreationForm", 145, 137), _filename("no-name")
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : AForm("ShrubberyCreationForm", 145, 137), _filename(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &ref) : AForm(ref.getName(), ref.getSign(), ref.getExecute()), _filename(ref._filename)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &ref)
{
	this->_filename = ref._filename;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
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
		std::ofstream file;
		file.open((this->_filename + "_shruberry"));
		std::string tab[19]= {"                     .o00o\n",
		"                   o000000oo\n",
		"                  00000000000o\n",
		"                 00000000000000\n",
		"              oooooo  00000000  o88o\n",
		"           ooOOOOOOOoo  ```''  888888\n",
		"         OOOOOOOOOOOO'.qQQQQq. `8888'\n",
		"        oOOOOOOOOOO'.QQQQQQQQQQ/.88'\n",
		"        OOOOOOOOOO'.QQQQQQQQQQ/ /q\n",
		"         OOOOOOOOO QQQQQQQQQQ/ /QQ\n",
		"           OOOOOOOOO `QQQQQQ/ /QQ'\n"
		"             OO:F_P:O `QQQ/  /Q'\n",
		"                \\\\. \\ |  // |\n",
		"                d\\ \\\\\\|_////\n",
		"                qP| \\\\ _' `|Ob\n",
		"                   \\  / \\  \\Op\n",
		"                   |  | O| |\n",
		"           _       /\\. \\_/ /\\\n",
		"            `---__/|_\\\\   //|  __\n",
		"                  `-'  `-'`-'-'"};

		for(int i = 0; i < 19; i++)
			file << tab[i];
		file.close();
		std::cout << "File has been created as : " << this->_filename + "_shruberry" << std::endl;
	}	
}
