/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:56:28 by matteo            #+#    #+#             */
/*   Updated: 2024/03/12 13:58:35 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

int	ft_test_1()				//	SUBJECT
{
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete (meta);
	delete (j);
	delete (i);

	return (0);
}

int	ft_test_2()				//	WRONGCAT
{
	const Animal*		meta = new Animal();
	const Animal*		j = new Dog();
	const WrongAnimal*	i = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the WrongCat sound!
	j->makeSound();
	meta->makeSound();

	delete (meta);
	delete (j);
	delete (i);

	return (0);
}

int	ft_test_3(void)			//	FRITTO MISTO
{
	const Animal*		meta = new Animal();
	const Animal*		j = new Dog();
	const Animal*		i = new Cat();
	const WrongAnimal*	wrongMeta = new WrongAnimal();
	const WrongAnimal*	wrongI = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << wrongI->getType() << " " << std::endl;
	wrongI->makeSound();
	wrongMeta->makeSound();

	delete (meta);
	delete (j);
	delete (i);
	delete (wrongMeta);
	delete (wrongI);

	return (0);
}
