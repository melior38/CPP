/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:31:22 by marvin            #+#    #+#             */
/*   Updated: 2024/01/16 19:31:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	EASYFIND_HPP
# define	EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <exception>
#include <vector>
#include <list>

class ErrorException : public std::exception
{
	public:
		const char  *what() const throw();
};

template < typename T >
typename T::iterator	easyfind(T &container, int const n)
{
	typename T::iterator find = std::find(container.begin(), container.end(), n);
	if (find == container.end())
		throw ErrorException();
	return find;
}

#endif