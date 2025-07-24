/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 20:08:37 by labderra          #+#    #+#             */
/*   Updated: 2025/07/24 19:29:36 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

#ifndef PHONEBOOK_H
# include "PhoneBook.hpp"


/*	Class PhoneBook
---------------------*/

PhoneBook::PhoneBook()
{
	_next_contact = 0;
}
	
PhoneBook::~PhoneBook(){
	
}

void	PhoneBook::getList()
{
	for (int i = 0; i < 8; i++)
	{
		getContactInline(i);
	}
}

void	PhoneBook::getContact(int i)
{
		std::cout << "First Name : " << _book[i].getFirstName() << std::endl;
		std::cout << "Last Name  : " << _book[i].getLastName() << std::endl;
		std::cout << "Nickname   : " << _book[i].getNickname() << std::endl;
		std::cout << "Phone N.   : " << _book[i].getPhoneNumber() << std::endl;
		std::cout << "Secret     : " << _book[i].getDarkestSecret() << std::endl;
}

void	PhoneBook::addContact(Contact new_Contact)
{
	_next_contact %= 8;
	_book[_next_contact].~Contact();
	_book[_next_contact] = new_Contact;
	_next_contact++;
}

void	normalize(std::string const & s) {
	std::string n;
	std::size_t i = 0;
	int c = 0;
	while (i < s.length() && c < 9) {
		if ((unsigned char) s.c_str()[i] > 127) {
			n.push_back(s[i++]);
		}
		n.push_back(s[i++]);
		c++;
	}
	if ((c==9 && s.length() - i > 2) || (c == 9 && s.length() - i == 2 && (unsigned char) s.c_str()[i] < 127)) {
		n.push_back('.');
		c++;
	}
	while (i < s.length() && c < 10) {
		if ((unsigned char) s.c_str()[i] > 127) {
			n.push_back(s[i++]);
		}
		n.push_back(s[i++]);
		c++;
	}
	i += 9 - c;
	std::cout << std::right << std::setw(i + 1);
	std::cout << n << "|" << std::flush;
}

void	PhoneBook::getContactInline(int i)
{
	std::cout << "\t" << i;
	std::cout << " |";
	normalize(_book[i].getFirstName());
	normalize(_book[i].getLastName());
	normalize(_book[i].getNickname());
	normalize(_book[i].getPhoneNumber());
	std::cout << std::endl;
}

#endif