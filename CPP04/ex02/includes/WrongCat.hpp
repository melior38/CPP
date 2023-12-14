/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:54:48 by marvin            #+#    #+#             */
/*   Updated: 2023/12/12 18:54:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"


#include <iostream>

class WrongCat : public WrongAnimal
{
	public:
	WrongCat();
	WrongCat(const WrongCat &ref);
	~WrongCat();

	WrongCat	&operator=(const WrongCat &ref);
	virtual void makeSound() const;
	std::string get_type() const;
	private:
	std::string _type;
};

#endif