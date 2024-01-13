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

#include <iostream>
#include <string>

class Base
{
	public:
		virtual ~Base(){};
};

class A: public Base
{

};

class B: public Base
{

};

class C: public Base
{

};

Base * generate(void)
{
	int choice = rand() % 3;
	if (choice == 0)
		return (new A());
	else if (choice == 1)
		return (new B());
	else
		return (new C());
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "this is a Base A !" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "this is a Base B !" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "this is a Base C !" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
		return ;
	}
	catch (std::bad_cast& e){}
	try
	{
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
		return ;
	}
	catch (std::bad_cast& e){}
	try
	{
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
		return ;
	}
	catch (std::bad_cast& e){}
}

int main()
{
	srand(time(NULL));
	Base *randomObject = generate();
	identify(randomObject);
	identify(*randomObject);
	return 0;
}