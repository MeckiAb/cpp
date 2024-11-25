/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 20:08:37 by labderra          #+#    #+#             */
/*   Updated: 2024/11/25 20:57:24 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

#ifndef PHONEBOOK_H
#include "PhoneBook.hpp"


/*	Class Contact
---------------------*/

Contact::Contact(){
	
}

Contact::Contact(std::string first, std::string last, std::string nick,
		std::string phone, std::string secret)
{
	_first_name = first;
	_last_name = last;
	_nickname = nick;
	_phone_number = phone;
	_darkest_secret = secret;
}

Contact::~Contact(){
	
}

/*	Class PhoneBook
---------------------*/

PhoneBook::PhoneBook()
{
	_first_contact = 0;
	_last_contact = 0;
}
	
PhoneBook::~PhoneBook(){
	
}

void	PhoneBook::getList()
{
	for (int i = 0; i < 9; i++)
	{
		if (!_book[i]._first_name.empty())
			getContactInline(i);
	}
}

void	PhoneBook::getContact(int i)
{
	std::cout << "First Name : " << _book[i]._first_name << std::endl;
	std::cout << "Last Name  : " << _book[i]._last_name << std::endl;
	std::cout << "Nickname   : " << _book[i]._nickname << std::endl;
	std::cout << "Phone N.   : " << _book[i]._first_name << std::endl;
}

void	PhoneBook::addContact(Contact new_Contact)
{
	if ((_last_contact + 1) % 9 == _first_contact)
	{
		_book[_first_contact].~Contact();
		_first_contact = (_first_contact + 1) % 9;
	}
	_book[_last_contact] = new_Contact;		
	_last_contact = (_last_contact + 1) % 9;
}

void	PhoneBook::getContactInline(int i)
{
	std::cout << i;
	if (_book[i]._first_name.size() > 10)
		std::cout << " |" << _book[i]._first_name.substr(0, 8) << ".";
	else
	{
		std::cout << std::setw(12);
		std::cout << " |" << _book[i]._first_name;
	}
	if (_book[i]._last_name.size() > 10)
		std::cout << "|" << _book[i]._last_name.substr(0, 8) << ".";
	else
	{
		std::cout << std::setw(11);
		std::cout << "|" << _book[i]._last_name;
	}
	if (_book[i]._nickname.size() > 10)
		std::cout << "|" << _book[i]._nickname.substr(0, 8) << ".";
	else
	{
		std::cout << std::setw(11);
		std::cout << "|" << _book[i]._nickname;
	}
	if (_book[i]._phone_number.size() > 10)
		std::cout << "|" << _book[i]._phone_number.substr(0, 8) << ".";
	else
	{
		std::cout << std::setw(11);
		std::cout << "|" << _book[i]._phone_number;
	}
	std::cout << "|" << std::endl;
}

#endif