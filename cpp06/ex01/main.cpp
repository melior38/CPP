/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 13:17:28 by marvin            #+#    #+#             */
/*   Updated: 2024/01/13 13:17:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data ptr {42, 64};
	
	uintptr_t raw = Serializer::serialize(&ptr);
	Data *copy = Serializer::deserialize(raw);
	std::cout << std::endl;
	std::cout << "init copy : " << copy->x << ", " << copy->y << " and the address :" << copy << std::endl; 
	std::cout << "init ptr : " << ptr.x << ", " << ptr.y << " and the address :" << &ptr <<std::endl;
	std::cout << std::endl;
	std::cout << "changing ptr.y for 100 now" << std::endl;
	std::cout << std::endl;
	ptr.y = 100;
	std::cout << "init copy : " << copy->x << ", " << copy->y << " and the address :" << copy << std::endl; 
	std::cout << "init ptr : " << ptr.x << ", " << ptr.y << " and the address :" << &ptr <<std::endl;
	std::cout << std::endl;
	return 0;
}