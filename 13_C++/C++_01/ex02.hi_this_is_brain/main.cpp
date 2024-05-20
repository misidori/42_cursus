/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteo <matteo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:39:28 by matteo            #+#    #+#             */
/*   Updated: 2024/02/14 10:52:19 by matteo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string		brain = "HI THIS IS BRAIN";
	std::string*	stringPTR = &brain;
	std::string&	stringREF = brain;

	std::cout << "Memory address of the string variable: " << &brain << std::endl;
	std::cout << "Memory address of the string variable held by stringPTR: " << &stringPTR << std::endl;
	std::cout << "Memory address of the string variable held by stringREF: " << &stringREF << std::endl;

	std::cout << "Value of the string variable: " << brain << std::endl;
	std::cout << "Value of the string variable pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value of the string variable pointed to by stringREF: " << stringREF << std::endl;

	return (0);
}

