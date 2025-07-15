/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 20:08:37 by labderra          #+#    #+#             */
/*   Updated: 2025/07/15 13:30:34 by labderra         ###   ########.fr       */
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
}

void	PhoneBook::addContact(Contact new_Contact)
{
	_next_contact %= 8;
	_book[_next_contact].~Contact();
	_book[_next_contact] = new_Contact;
	_next_contact++;
}

void	PhoneBook::getContactInline(int i)
{
	std::cout << "\t" << i;
	std::cout << " |";
	if (_book[i].getFirstName().size() > 10)
		 std::cout << _book[i].getFirstName().substr(0, 9) << ".";
	else
	{
		std::cout << std::right << std::setw(10);
		std::cout << _book[i].getFirstName();
	}
	std::cout << "|";
	if (_book[i].getLastName().size() > 10)
		std::cout << _book[i].getLastName().substr(0, 9) << ".";
	else
	{
		std::cout << std::right << std::setw(10);
		std::cout << _book[i].getLastName();
	}
	std::cout << "|";
	if (_book[i].getNickname().size() > 10)
		std::cout << _book[i].getNickname().substr(0, 9) << ".";
	else
	{
		std::cout << std::right << std::setw(10);
		std::cout << _book[i].getNickname();
	}
	std::cout << "|";
	if (_book[i].getPhoneNumber().size() > 10)
		std::cout << _book[i].getPhoneNumber().substr(0, 9) << ".";
	else
	{
		std::cout << std::right << std::setw(10);
		std::cout << _book[i].getPhoneNumber();
	}
	std::cout << "|" << std::endl;
}

#endif