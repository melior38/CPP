/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:51:45 by marvin            #+#    #+#             */
/*   Updated: 2023/12/06 17:51:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Fixed.hpp"

// int main() 
// {
// 	Fixed a;
// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;
// 	std::cout << Fixed::max( a, b ) << std::endl;
// 	return 0;
// }


int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed const c(12.5f);


	std::cout << "a is : " << a << std::endl;
	std::cout << "++a is : "<< ++a << std::endl;
	std::cout << "a is : " << a << std::endl;
	std::cout << "a++ is : " << a++ << std::endl;
	std::cout << "a is : " << a << std::endl;

	std::cout << "b is : " << b << std::endl;

	std::cout << "c is : " << c << std::endl;
	std::cout << "a + c : " << a + c << std::endl;
	std::cout << "a - c : " << a - c << std::endl;
	std::cout << "a * c : " << a * c << std::endl;
	std::cout << "a / c : " << a / c << std::endl;

	std::cout << "a == c : " << (a == c) << std::endl;
	std::cout << "a != c : " << (a != c) << std::endl;
	std::cout << "a < c : " << (a < c) << std::endl;
	std::cout << "a > c : " << (a > c) << std::endl;
	std::cout << "a >= c : " << (a >= c) << std::endl;
	std::cout << "a <= c : " << (a <= c) << std::endl;
	std::cout << "max value between a and c : " << Fixed::max(a,c) << std::endl;
	std::cout << "min value between a and c : " << Fixed::min(a,c) << std::endl;
	return 0;
}