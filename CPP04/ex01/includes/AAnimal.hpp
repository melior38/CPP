/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:52:44 by marvin            #+#    #+#             */
/*   Updated: 2023/12/12 17:52:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

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

class AAnimal
{
	public:
	AAnimal();
	AAnimal(const AAnimal &ref);
	virtual ~AAnimal();

	AAnimal	&operator=(const AAnimal &ref);
	// virtual void makeSound() = 0;
	virtual void 		makeSound() = 0;
	virtual std::string get_type() = 0;
	virtual	Brain*		getBrain() = 0;
	private:
	std::string _type;
};

#endif