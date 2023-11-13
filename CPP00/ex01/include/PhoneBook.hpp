/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouchet <asouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:13:17 by marvin            #+#    #+#             */
/*   Updated: 2023/11/13 17:38:41 by asouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include "Contact.hpp"

class PhoneBook {

public:
	PhoneBook(void);
	PhoneBook&	operator=(const PhoneBook& other);
	PhoneBook(PhoneBook& other);
	void		add_users(void);
	void		search_users(PhoneBook repertory) const;
	void		show_users(void) const;
	void		norm(std::string str) const;
	void		aff_user(Contact user);
	void		replace_id(Contact *users);
	~PhoneBook(void);
private:
	Contact		_users[8];
	static int	_id_gen;
};

std::string	safe_getline(void);

#endif