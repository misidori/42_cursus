/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 09:55:19 by matteo            #+#    #+#             */
/*   Updated: 2024/02/23 15:36:45 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "header.h"

class	Contact
{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

public:
				Contact();
				~Contact();

	void		set_first_name(const std::string first_name);
	void		set_last_name(const std::string last_name);
	void		set_nickname(const std::string nickname);
	void		set_phone_number(const std::string phone_number);
	void		set_darkest_secret(const std::string darkest_secret);
	std::string	get_first_name() const;
	std::string	get_last_name() const;
	std::string	get_nickname() const;
	std::string	get_phone_number() const;
	std::string	get_darkest_secret() const;
};

#endif
