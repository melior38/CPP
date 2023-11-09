/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:22:40 by marvin            #+#    #+#             */
/*   Updated: 2023/11/06 19:22:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "include/main.hpp"

PhoneBook::~PhoneBook(void)
{

}

PhoneBook&	PhoneBook::operator=(const PhoneBook& other)
{
	for(int i = 0; i < 8; i++)
	{
		this->_users[i] = other._users[i];
	}
	return *this;
}

PhoneBook::PhoneBook(PhoneBook &other)
{
	for (int i = 0; i < 8; i++)
		this->_users[i] = other._users[i];	
	return ;
}


PhoneBook::~PhoneBook(void)
{

}

std::string	safe_getline(void)
{
	std::string tmp = "";
	while(!std::getline(std::cin, tmp) || tmp.length() == 0)
	{
		if(std::cin.fail())
		{
			std::cout << "\nClosing the prompt !" << std::endl;
			exit(0);
		}
		if(tmp.length() == 0)
			return "";
		std::cin.clear();
	}
	return tmp;
}

void	PhoneBook::add_users(void)
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	int			id = 7;

	if (PhoneBook::_id_gen <= 7)
	{
		id = PhoneBook::_id_gen;
		PhoneBook::_id_gen++;
	}
	// else
		// fonction qui replace les id
while(first_name == "")
	{
		std::cout << "Enter first name :";
		first_name = safe_getline();
	}
	while(last_name == "")
	{
		std::cout << "Enter last name :";
		last_name = safe_getline();
	}
	while (nickname == "")
	{
		std::cout << "Enter nickname :";
		nickname = safe_getline();
	}
	while(phone_number == "")
	{
		std::cout << "Enter phone_number :";
		phone_number = safe_getline();
	}
	while(darkest_secret == "")
	{
		std::cout << "Enter darkest secret :";
		darkest_secret = safe_getline();
	}
	this->_users[id].update_user(first_name, last_name, nickname, phone_number, darkest_secret, id);
}

int PhoneBook::_id_gen = 0;

void	PhoneBook::norm(std::string str) const
{
	int size = str.length();
	int i = 0;
	int j = 0;

	if (size == 10)
		std::cout << str;
	if (size < 10)
	{
		while (i < (10 - size))
		{
			std::cout << " ";
			i++;
		}
		while (i < 10)
		{
			std::cout << str[j++];
			i++;
		}
	}
	else
	{
		while (i < 9)
		{
			std::cout << str[j++];
			i++;
		}
		std::cout << ".";
	}
}


void	PhoneBook::show_users(void) const
{	
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	for (int i = 0; i < 8; i++)
		if (this->_users[i].get_id() == i)
		{
			this->norm(std::to_string(this->_users[i].get_id()));
			std::cout << "|";
			this->norm(this->_users[i].get_f_name());
			std::cout << "|";
			this->norm(this->_users[i].get_l_name());
			std::cout << "|";
			this->norm(this->_users[i].get_n_name());
			std::cout << std::endl;
		}
}

int	is_alnum(std::string line)
{
	std::basic_string<char>::size_type i = 0;
	while (line[i] <= '9' && line[i] >= '0')
		i++;
	if (i == line.length())
		return 0;
	return 1;
}

void	PhoneBook::aff_user(Contact user)
{
	std::cout << "First name : " << user.get_f_name() << std::endl;
	std::cout << "Last name : " << user.get_l_name() << std::endl;
	std::cout << "Nickname : " << user.get_n_name() << std::endl;
	std::cout << "Phone number : " << user.get_number() << std::endl;
	std::cout << "Darkest secret : " << user.get_secret() << std::endl;
	return ;
}

void	PhoneBook::search_users(PhoneBook repertory) const
{
	std::string	line;
	std::cout << "enter id : ";
	line = safe_getline();
	while (true)
	{
		if (is_alnum(line))
			line = safe_getline();
		else
		{
			std::cout << std::endl;
			break ;
		}
		std::cout << std::endl;
	}
	while (true)
	{
		if (std::stoi(line) <= 8 && std::stoi(line) >= 0)
		{
			repertory.aff_user(repertory._users[std::stoi(line)]);
			break ;
		}
	}
}
