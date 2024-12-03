/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 20:08:37 by labderra          #+#    #+#             */
/*   Updated: 2024/12/02 18:46:59 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*	Class Contact
---------------------*/

class Contact {

public:
	Contact();
	Contact(std::string _first_name, std::string _last_name, std::string _nickname,
		std::string _phone_number, std::string _darkest_secret);
	~Contact(void);
	std::string		_first_name;
	std::string		_last_name;
	std::string		_nickname;
	std::string		_phone_number;

private:
	std::string		_darkest_secret;
};

/*	Class PhoneBook
---------------------*/

#ifndef PHONEBOOK_H
#define PHONEBOOK_H


class PhoneBook {

public:
	PhoneBook(void);
	~PhoneBook(void);
	void	getList();
	void	getContact(int i);
	void	addContact(Contact new_Contact);

private:
	void	getContactInline(int i);
	Contact	_book[8];
	int		_next_contact;
};

#endif