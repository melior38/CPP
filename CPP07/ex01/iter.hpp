/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:36:44 by marvin            #+#    #+#             */
/*   Updated: 2024/01/15 11:36:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>



// template< typename T , typename U >
// void	iter(T *array, U  const lenght, void (*func)(T));


// template<typename T>
// void print_content(T content);

template<typename T>
void print_content(T content)
{
	std::cout << "The content is : " << content << std::endl;
}

template< typename T , typename U >
void	iter(T *array, U  const lenght, void (*func)(T))
{
	for (U i = 0; i < lenght; i++)
	{
		func(array[i]);
	}
}

#endif