/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:00:07 by matteo            #+#    #+#             */
/*   Updated: 2024/02/22 17:47:31 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "header.h"

class	Phonebook
{
private:
	Contact	contacts[8];
	int		oldest_contact_index;
	int		contact_count;

public:
			Phonebook();
			~Phonebook();

	int		get_contact_count() const;
	void	add_contact(Contact new_contact);
	void	display_contacts();
	int		display_contact(int index);
};

#endif
