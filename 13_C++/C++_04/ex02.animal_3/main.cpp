/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:51:46 by matteo            #+#    #+#             */
/*   Updated: 2024/03/12 14:08:00 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

int main()
{
	Animal*	animal[10];
	int		i = 0;

	std::cout << std::endl << BOLD GREY "START TEST TEMP COPY CONSTRUCTOR" << RESET << std::endl;
	Cat simple_cat;
	{
		Cat temp_cat = simple_cat;
	}
	std::cout << BOLD GREY << "END TEST TEMP COPY CONSTRUCTOR" << std::endl << RESET << std::endl;


	while (i < 5)
	{
		animal[i] = new Dog();
		i++;
	}

	while (i < 10)
	{
		animal[i] = new Cat();
		i++;
	}

	i = 0;
	while (i < 10)
	{
		animal[i]->makeSound();
		i++;
	}

	i = 0;
	while (i < 10)
	{
		delete (animal[i]);
		i++;
	}

	return (0);
}
