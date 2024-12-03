/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   awesome.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:33:50 by labderra          #+#    #+#             */
/*   Updated: 2024/12/03 11:09:20 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <limits>

int	main(void)
{
	PhoneBook	awesome;
	std::string	option;
	std::string name;
	std::string surname;
	std::string nick;
	std::string number;
	std::string secret;
	char	id = '\0';

	while (option != "X" && option != "EXIT" && !std::cin.eof())
	{
		std::cout << "\033[2J\033[H" << std::flush;
		std::cout << "\n\t\t\033[1mAwesomic Crappy PhoneBook App\033[0m\n" << std::endl;
		std::cout << "Options :  (A)DD  |  (S)EARCH  |  E(X)IT  |  select your option : ";
		std::getline(std::cin, option);
		if (!std::cin.eof() && (option == "ADD" || option == "A"))
		{
			std::cout << "\n\nFirst Name     : " << std::flush;
			std::getline(std::cin, name);
			!std::cin.eof() && std::cout << "Last Name      : " << std::flush;
			std::getline(std::cin, surname);
			!std::cin.eof() && std::cout << "Nickname       : " << std::flush;
			std::getline(std::cin, nick);
			!std::cin.eof() && std::cout << "Phone N.       : " << std::flush;
			std::getline(std::cin, number);
			!std::cin.eof() && std::cout << "Darkest Secret : " << std::flush;
			std::getline(std::cin, secret);
			if (name.empty() || surname.empty() || nick.empty() || number.empty() || secret.empty())
				!std::cin.eof() && std::cout << "\nMust fill all fields. " << std::flush;
			else
				awesome.addContact(Contact(name, surname, nick, number, secret));
			!std::cin.eof() && std::cout << "\nPress key to continue" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		if (!std::cin.eof() && (option == "SEARCH" || option == "S"))
		{
			std::cout << "\n\n\t    Name       Surname    Nick       Phone" << '\n';
			std::cout << "\t-----------------------------------------------" << std::endl;
			awesome.getList();
			std::cout << "\t-----------------------------------------------" << std::endl;
			std::cout << "\n\tSelect Contact : " << std::flush;
			id = std::cin.get();
			if (!std::cin.eof() && (id >= '0' && id < '8'))
				awesome.getContact(id - '0');
			else
				!std::cin.eof() && std::cout << "\nError. " << std::flush;
			!std::cin.eof() && std::cout << "\nPress key to continue" << std::endl;
			std::cin.get();std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}
}