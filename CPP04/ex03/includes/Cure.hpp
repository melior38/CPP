/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:31:31 by marvin            #+#    #+#             */
/*   Updated: 2023/12/14 17:31:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CURE_HPP
#define CURE_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class cure : public AMateria
{
public:
	cure();
	cure(const cure &ref);
	virtual ~cure();

	cure	&operator=(const cure &ref);
	virtual	AMateria*	clone() const;
	virtual void use(ICharacter& target);
private:
};

#endif