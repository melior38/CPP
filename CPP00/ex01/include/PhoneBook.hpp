/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:13:17 by marvin            #+#    #+#             */
/*   Updated: 2023/11/06 21:25:03 by marvin           ###   ########.fr       */
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
	~PhoneBook(void);
private:
	Contact _users[8];
};

#endif