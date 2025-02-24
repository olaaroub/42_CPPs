/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 14:37:59 by olaaroub          #+#    #+#             */
/*   Updated: 2025/02/22 21:27:03 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
class PhoneBook
{
	Contact _contacts[8];
	int _i;

public:
	void add_contact(Contact contact);
	void    search_contact();
	PhoneBook(){_i = 0;}
};

#endif