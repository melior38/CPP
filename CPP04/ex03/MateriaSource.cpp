/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouchet <asouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:21:47 by asouchet          #+#    #+#             */
/*   Updated: 2023/12/21 15:26:13 by asouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/MateriaSource.hpp"

MateriaSource::MateriaSource() : IMateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_src[i] = NULL;
}


MateriaSource::MateriaSource(MateriaSource const &ref) : IMateriaSource(ref)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_src[i])
		{
			delete this->_src[i];
			this->_src[i] = NULL;
		}
		if (ref._src[i])
		{
			if (ref._src[i]->getType() == "ice")
				this->_src[i] = new ice();
			else if (ref._src[i]->getType() == "cure")
				this->_src[i] = new cure();
		}
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_src[i])
		{
			delete this->_src[i];
			this->_src[i] = NULL;
		}
	}
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &ref)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_src[i])
		{
			delete this->_src[i];
			this->_src[i] = NULL;
		}
		if (ref._src[i])
		{
			if (ref._src[i]->getType() == "ice")
				this->_src[i] = new ice();
			else if (ref._src[i]->getType() == "cure")
				this->_src[i] = new cure();
		}
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_src[i])
		{
			AMateria	*tmp = 0;
			if (m->getType() == "cure")
				tmp = new cure();
			else if (m->getType() == "ice")
				tmp = new ice();
			this->_src[i] = tmp;
			break ;
		}
	}
	delete m;
}

AMateria*	MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_src[i])
		{
			if (this->_src[i]->getType() == type)
			{
				AMateria	*ret = 0;
				if (type == "ice")
					ret = new ice();
				if (type == "cure")
					ret = new cure();
				return ret;
			}
		}
	}
	return 0;
}
