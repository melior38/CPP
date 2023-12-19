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

class cure
{
	public:
	cure();
	cure(const cure &ref);
	virtual ~cure();

	virtual	cure*	clone() const;
	cure	&operator=(const cure &ref);
	private:
};

#endif