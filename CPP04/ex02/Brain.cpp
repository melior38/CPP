/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:31:22 by marvin            #+#    #+#             */
/*   Updated: 2023/12/13 14:31:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Brain.hpp"

Brain::Brain()
{
	std::cout << "Constructor of type " << YELLOW << "Brain is called !" << RESET << std::endl; 
}

Brain::Brain(const Brain &ref) 
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = ref._ideas[i];
	*this = ref;
}

Brain::~Brain()
{
	std::cout << "Destructor of type " << YELLOW << "Brain is called !" <<  RESET << std::endl;
}

Brain	&Brain::operator=(const Brain &ref)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = ref._ideas[i];
	return *this;
}

std::string	Brain::getIdea(int i) const
{
	if (i >= 0 && i <= 100)
		return this->_ideas[i];
	else
		std::cout << "Brain : GetIdea : Invalid ID";
	return ("");
}

void	Brain::setIdea(int i, std::string idea)
{
	if (i >= 0 && i <= 100)
		this->_ideas[i] = idea;
	else
		std::cout << "Brain : GetIdea : Invalid ID";
}
