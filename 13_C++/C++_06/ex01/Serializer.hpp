/*	Serializer.hpp	*/

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <stdint.h>

#include "data.h"

class Serializer
{
public:
	static uintptr_t	serialize(Data* ptr);
	static Data*		deserialize(uintptr_t raw);
};

#endif
