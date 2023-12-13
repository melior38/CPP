/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 20:07:28 by marvin            #+#    #+#             */
/*   Updated: 2023/12/12 20:07:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
// #include "Animal.hpp"
#define RESET  "\x1B[0m"
#define RED  "\x1B[31m"
#define GREEN  "\x1B[32m"
#define YELLOW  "\x1B[33m"
#define BLUE  "\x1B[34m"
#define MAGENTA  "\x1B[35m"
#define CYAN  "\x1B[36m"
#define WHITE  "\x1B[37m"

class Brain
{
	public:
	Brain();
	Brain(const Brain &ref);
	virtual 	~Brain();

	Brain				&operator=(const Brain &ref);
	virtual std::string	getIdea(int i) const;
	virtual void		setIdea(int i, std::string idea);
	private:
	std::string 		_ideas[100];
};

#endif