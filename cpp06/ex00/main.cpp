/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:27:00 by marvin            #+#    #+#             */
/*   Updated: 2024/01/12 13:27:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScalarConverter.hpp"

using std::cout;
using std::endl;

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		cout<<"Usage: ./convert <value>"<<endl;
		return (1);
	}	
	std::string arg = argv[1];
	ScalarConverter::convert(arg);
	return (0);
}