/*	main.cpp	*/

#include <iostream>

#include "Serializer.hpp"
#include "data.h"

int main(void)
{
	Data		data = {10, "Ciao mamma"};
	uintptr_t	raw = 0;
	Data*		deserializedData;

	std::cout << GREEN << "Value data: \n" << RESET << data;
	std::cout << YELLOW << "Memory address data: \n" << RESET << &data << std::endl;

	std::cout << std::endl;

	raw = Serializer::serialize(&data);
	std::cout << GREEN << "raw (uintptr_t): " << RESET << raw << std::endl;
	std::cout << YELLOW << "raw (hex): " << std::hex << RESET << "0x" << raw << std::dec << std::endl;

	std::cout << std::endl;

	deserializedData = Serializer::deserialize(raw);

	std::cout << std::endl;

	if (deserializedData == &data)
	{
		std::cout << BOLD GREEN << "Deserialization succeed" << RESET << std::endl;
		std::cout << GREEN << "Value deserializedData: \n" << RESET << *deserializedData;
		std::cout << YELLOW << "Memory address deserializedData (hex): \n" << RESET << deserializedData << std::endl;
		std::cout << std::endl;
	}
	else
	{
		std::cout << RED << "Deserialization failed" << RESET << std::endl;
		std::cout << std::endl;
	}


	return (0);
}
