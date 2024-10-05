/*	iter.h	*/

#ifndef ITER_H
# define ITER_H

template<typename T, typename E>
void	iter(T* address, int length, void (*func)(E));

#endif
