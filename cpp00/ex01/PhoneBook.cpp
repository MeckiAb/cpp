/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 20:08:37 by labderra          #+#    #+#             */
/*   Updated: 2024/11/25 00:19:59 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*	Class PhoneBook
---------------------*/

#ifndef PHONEBOOK_H
#include "PhoneBook.hpp"


class PhoneBook {

public:
	PhoneBook()
	{
		_first_contact = 0;
		_last_contact = 0;
	}
	
	~PhoneBook(){}
	void	getList();
	void	getContact(int i)
	{
		std::cout << _book[i]._first_name << std::'endl;
	}
	
	void	addContact(Contact new_Contact)
	{
		if ((_last_contact + 1) % 8 == _first_contact)
		{
			_book[_first_contact].~Contact();
			_first_contact = (_first_contact + 1) % 8;
		}
		_last_contact = (_last_contact + 1) % 8;
		_book[_last_contact] = new_Contact;		
	}

private:
	Contact	_book[8];
	int		_first_contact;
	int		_last_contact;
};

/*	Class Contact
---------------------*/

class Contact {

public:
	Contact(){}
	Contact(std::string first, std::string last, std::string nick,
		std::string phone, std::string secret)
	{
		_first_name = first;
		_last_name = last;
		_nickname = nick;
		_phone_number = phone;
		_darkest_secret = secret;
	}
	
	~Contact(){}
	std::string		_first_name;
	std::string		_last_name;
	std::string		_nickname;
	std::string		_phone_number;

private:
	std::string		_darkest_secret;
};

#endif