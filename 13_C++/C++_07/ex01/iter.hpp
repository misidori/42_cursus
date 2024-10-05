/*	iter.hpp	*/

#ifndef ITER_HPP
# define ITER_HPP

template<typename E>
static void	printElement(E element)
{
	std::cout << element << std::endl;
}

template<typename T, typename E>
void	iter(T* array, int length, void (*func)(E))
{
	for (int i = 0; i < length; i++)
	{
		func(array[i]);
	}
}

#endif
