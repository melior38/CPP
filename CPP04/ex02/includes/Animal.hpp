/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:52:44 by marvin            #+#    #+#             */
/*   Updated: 2023/12/12 17:52:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "Brain.hpp"
#include <iostream>

#define RESET  "\x1B[0m"
#define RED  "\x1B[31m"
#define GREEN  "\x1B[32m"
#define YELLOW  "\x1B[33m"
#define BLUE  "\x1B[34m"
#define MAGENTA  "\x1B[35m"
#define CYAN  "\x1B[36m"
#define WHITE  "\x1B[37m"

class Animal
{
	public:
	Animal();
	Animal(const Animal &ref);
	virtual ~Animal();

	Animal	&operator=(const Animal &ref);
	// virtual void makeSound() = 0;
	virtual std::string get_type() const;
	virtual void 		makeSound() const = 0;
	virtual	Brain*		getBrain() const = 0;
	private:
	std::string _type;
};

#endif