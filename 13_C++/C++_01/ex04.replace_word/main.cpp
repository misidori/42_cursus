/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 19:58:39 by matteo            #+#    #+#             */
/*   Updated: 2024/02/24 12:58:05 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << RED << "Wrong parameters" << RESET << std::endl;
		return (1);
	}

	std::ifstream	input_file(argv[1]);
	if (!input_file)
	{
		std::cerr << RED << "Cannot open the file" << RESET << std::endl;
		return (1);
	}
	std::string		output_name = argv[1];
	output_name.append(".replace");
	std::ofstream	output_file(output_name);
	if (!output_file)
	{
		std::cerr << RED << "Cannot create the file" << RESET << std::endl;
		return (1);
	}

	std::string		line;
	static int		flag_find_word = 0;

	while (std::getline(input_file, line))
	{
		flag_find_word = ft_replace_word(line, argv[2], argv[3], flag_find_word);
		output_file << line << std::endl;
	}

	input_file.close();

	if (flag_find_word <= 0)
	{
		std::cout << YELLOW << "No match found" << std::endl;
		output_file.close();
		output_file.open(output_name, std::ios::out | std::ios::trunc);
	}
	else
	{
		if (flag_find_word == 1)
			std::cout << GREEN << "\"" << argv[2] << "\" has been replaced " << flag_find_word << " time with " << "\"" << argv[3] << "\"" << RESET << std::endl;
		else
			std::cout << GREEN << "\"" << argv[2] << "\" has been replaced " << flag_find_word << " times with " << "\"" << argv[3] << "\"" << RESET << std::endl;
	}

	output_file.close();

	return (0);
}
