/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:05:27 by marvin            #+#    #+#             */
/*   Updated: 2023/12/13 15:05:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Cat.hpp"
#include "includes/Dog.hpp"

int main()
{
	{
		std::cout << "--------------------------------------------------------------------------------------"
				  << std::endl;
		const Animal *doggo = new Dog();
		const Animal *cato = new Cat();
		std::cout << "Idea 0 is : " << doggo->getBrain()->getIdea(0) << std::endl;
		doggo->getBrain()->setIdea(0, "test");
		std::cout << "Idea 0 is now : " << doggo->getBrain()->getIdea(0) << std::endl;
		delete doggo;
		delete cato;
		std::cout << "--------------------------------------------------------------------------------------"
				  << std::endl;
	}
	{
		std::cout << "--------------------------------------------------------------------------------------"
				  << std::endl;
		Animal*	tab[4] = {};
		for(int i = 0; i < 2; i++)
			tab[i] = new Dog();
		for(int i = 2; i < 4; i++)
			tab[i] = new Cat();

		for(int i = 0; i < 4; i++)
		{
			delete tab[i];
		}
		std::cout << "--------------------------------------------------------------------------------------"
				  << std::endl;
	}
	{
		std::cout << "--------------------------------------------------------------------------------------"
				  << std::endl;
		Animal	*doggle = new Dog();
		{
			std::cout <<"new scope" << std::endl;
			Animal *doglas  = new Dog();
			std::cout << "doggle Idea 0 is : " << doggle->getBrain()->getIdea(0) << std::endl;
			std::cout << "doglas Idea 0 is : " << doglas->getBrain()->getIdea(0) << std::endl;
			doglas->getBrain()->setIdea(0, "Fish!");
			doggle->getBrain()->setIdea(0,"Poulet!");
			std::cout << "doggle Idea 0 is : " << doggle->getBrain()->getIdea(0) << std::endl;
			*doglas = *doggle;
			std::cout << "doglas Idea 0 is : " << doglas->getBrain()->getIdea(0) << std::endl;
			delete doglas;
		}
		std::cout << "--------------------------------------------------------------------------------------"
				  << std::endl;
		delete doggle;
	}
	return 0;
}