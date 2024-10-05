/*	main.cpp	*/

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "colors.h"

#include <iostream>
#include <cstdlib>
#include <ctime>

int	randomNumber()
{
	int	num = 0;

	std::srand(std::time(0));

	num = std::rand() % 3 + 1;

	return (num);
}

Base*	generate(void)
{
	int	x = randomNumber();

	switch (x)
	{
	case 1:
		return (new A);
	case 2:
		return (new B);
	case 3:
		return (new C);
	default:
		return (nullptr);
	}
}

void	identify(Base* p)
{
	std::cout << YELLOW << "identify(Base* p)" << RESET << std::endl;
	
	if (dynamic_cast<A*>(p))
	{
		std::cout << "class A type" << std::endl;
	}
	else if (dynamic_cast<B*>(p))
	{
		std::cout << "class B type" << std::endl;
	}
	else if (dynamic_cast<C*>(p))
	{
		std::cout << "class C type" << std::endl;
	}
}


void	identify(Base& p)
{
	std::cout << YELLOW << "identify(Base& p)" << RESET << std::endl;

	try {
		A& a = dynamic_cast<A&>(p);
		std::cout << "class A type" << std::endl;
		(void) a;
	}
	catch(const std::bad_cast& e) {
		try {
			B& b = dynamic_cast<B&>(p);
			std::cout << "class B type" << std::endl;
			(void) b;
		}
		catch(const std::bad_cast& e) {
			std::cout << "class C type" << std::endl;
		}
	}
}

int main(void)
{
	Base* obj = generate();

	std::cout << std::endl;

	identify(obj);

	std::cout << std::endl;

	identify(*obj);

	std::cout << std::endl;

	delete (obj);

	return (0);
}
