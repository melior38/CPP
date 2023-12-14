/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:17:47 by marvin            #+#    #+#             */
/*   Updated: 2023/12/12 18:17:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public Animal
{
	public:
	Dog();
	Dog(const Dog &ref);
	virtual ~Dog();

	Dog					&operator=(const Dog &ref);
	virtual void		makeSound() const;
	virtual std::string get_type() const;
	virtual Brain*		getBrain() const;
	private:
	std::string 		_type;
	Brain* 				_brain;
};

#endif