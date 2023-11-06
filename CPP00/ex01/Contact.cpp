
#include <iostream>
#include "include/main.hpp"

Contact::Contact(void)
{
	std::cout << "constructor Contact called" << std::endl;
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

Contact::~Contact(void)
{
	std::cout << "destructor ~Contact called" << std::endl;
	return ;
}

int Contact::get_id(void) const
{
	return (this->_id);
}