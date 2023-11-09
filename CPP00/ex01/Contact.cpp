
#include <iostream>
#include "include/main.hpp"

Contact::Contact(void)
{
	this->_first_name = "";
	this->_last_name = "";
	this->_nickname = "";
	this->_phone_number = "";
	this->_darkest_secret = "";
	this->_id = -1;
	return ;
}

Contact::Contact(std::string f_name ,std::string l_name, std::string n_name, std::string p_num, std::string d_sec, int id)
: _first_name(f_name) , _last_name(l_name), _nickname(n_name), _phone_number(p_num), _darkest_secret(d_sec), _id(id)
{

}

Contact&	Contact::operator=(const Contact& other)
{
	this->_first_name = other._first_name;
	this->_last_name = other._last_name;
	this->_nickname = other._nickname;
	this->_phone_number = other._phone_number;
	this->_darkest_secret = other._darkest_secret;
	return *this;
}

Contact::Contact(Contact &other)
{
	this->_first_name = other._first_name;
	this->_last_name = other._last_name;
	this->_nickname = other._nickname;
	this->_phone_number = other._phone_number;
	this->_darkest_secret = other._darkest_secret;
	this->_id = other._id;
}

void Contact::update_user(std::string f_name, std::string l_name, std::string n_name, std::string p_num,
						  std::string d_sec, int id)
{
		this->_id = id;
		this->_darkest_secret = d_sec;
		this->_phone_number = p_num;
		this->_nickname = n_name;
		this->_last_name = l_name;
		this->_first_name = f_name;
}

Contact::~Contact(void)
{
	return ;
}

int Contact::get_id(void) const
{
	return (this->_id);
}

std::string	Contact::get_f_name(void) const
{
	return (this->_first_name);
}

std::string	Contact::get_l_name(void) const
{
	return (this->_last_name);
}

std::string	Contact::get_n_name(void) const
{
	return (this->_nickname);
}

std::string	Contact::get_number(void) const
{
	return (this->_phone_number);
}

std::string	Contact::get_secret(void) const
{
	return (this->_darkest_secret);
}