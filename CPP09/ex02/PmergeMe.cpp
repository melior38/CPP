/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouchet <asouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:14:59 by asouchet          #+#    #+#             */
/*   Updated: 2024/01/30 18:19:37 by asouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool	args_Handler(const char **av)
{
	for (int i = 0; av[i]; i++)
		for (int j = 0; av[i][j] ;j++)
			if (av[i][j] > '0' && av[i][j] < '9')
				return false;
	return true;
}

int		jacobstahl(int index)
{

}