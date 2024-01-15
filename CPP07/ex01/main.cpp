/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:37:06 by marvin            #+#    #+#             */
/*   Updated: 2024/01/15 11:37:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


void show_double(int a)
{
	std::cout << "Content is : " << a*2 << std::endl;
}

int main(void)
{
	int const size = 5;
	int tab[size] = {1, 2 ,3 ,4 ,5};
	char tab2[size] = {'A', 'B' ,'C' ,'D' ,'E'};
	std::string tab3[size-1] = {"Hello", ",", "World", "!"};
	iter<int, int>(tab, size, print_content);
	iter<int, int>(tab, size, show_double);
	iter(tab2, size, print_content);
	iter(tab3, size-1, print_content);
}