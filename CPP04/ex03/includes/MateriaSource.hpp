/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouchet <asouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:10:58 by asouchet          #+#    #+#             */
/*   Updated: 2023/12/21 15:25:23 by asouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"
// #include "Ice.hpp"
// #include "Cure.hpp"

class MateriaSource : public IMateriaSource
{
	public:
	MateriaSource();
	MateriaSource(MateriaSource const &ref);
	virtual ~MateriaSource();

	MateriaSource		&operator=(MateriaSource const &ref);
	virtual void		learnMateria(AMateria *m);
	virtual AMateria*	createMateria(std::string const &type);
	private:
	AMateria*	_src[4];
};

#endif