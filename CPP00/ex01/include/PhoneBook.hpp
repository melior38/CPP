/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouchet <asouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:47:18 by asouchet          #+#    #+#             */
/*   Updated: 2023/11/02 17:08:06 by asouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


class Contact {
public:
	Contact(void);
	~Contact(void);
private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;
};

class PhoneBook {

public:

	PhoneBook(void);
	~PhoneBook(void);
private:
	Contact _tab[8];
};