/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_word.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 23:38:25 by misidori          #+#    #+#             */
/*   Updated: 2024/02/24 13:02:59 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_replace_word(std::string& str, std::string old_word, std::string new_word, int flag_find_word)
{
	size_t	pos = 0;

	while ((pos = str.find(old_word, pos)) != std::string::npos)
	{
		if ((pos == 0 || !isalpha(str[pos - 1]))
			&& (pos + old_word.length() == str.length()
			|| !isalpha(str[pos + old_word.length()])))
		{
			str.erase(pos, old_word.length());
			str.insert(pos, new_word);
			flag_find_word++;
		}
		pos += new_word.length();
	}
	
	return (flag_find_word);
}
