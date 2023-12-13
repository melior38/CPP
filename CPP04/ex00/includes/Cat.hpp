/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:18:54 by marvin            #+#    #+#             */
/*   Updated: 2023/12/12 18:18:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

#include <iostream>

class Cat : public Animal
{
	public:
	Cat();
	Cat(const Cat &ref);
	virtual ~Cat();

	Cat	&operator=(const Cat &ref);
	virtual void makeSound() const;
	virtual std::string get_type() const;
	private:
	std::string _type;
};

#endif