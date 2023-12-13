/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 19:47:17 by marvin            #+#    #+#             */
/*   Updated: 2023/12/11 19:47:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Animal.hpp"
#include "includes/Dog.hpp"
#include "includes/Cat.hpp"
#include "includes/WrongAnimal.hpp"
#include "includes/WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << i->get_type() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	std::cout << j->get_type() << " " << std::endl;
	j->makeSound();
	std::cout << meta->get_type() << " " << std::endl;
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	// const WrongAnimal* w_meta = new WrongAnimal();
	// const WrongAnimal* w_i = new WrongCat();
	// std::cout << w_i->get_type() << " " << std::endl;
	// w_i->makeSound();
	// std::cout << w_meta->get_type() << " " << std::endl;
	// w_meta->makeSound();
	// delete w_i;
	// delete w_meta;
	return 0;
}
