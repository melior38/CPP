/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:53:29 by marvin            #+#    #+#             */
/*   Updated: 2023/12/12 18:53:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &ref);
	~WrongAnimal();

	WrongAnimal	&operator=(const WrongAnimal &ref);
	// virtual void makeSound() = 0;
	void makeSound() const;
	std::string get_type() const;
	private:
	std::string _type;
};

#endif