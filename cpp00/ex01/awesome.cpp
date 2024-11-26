/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   awesome.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:33:50 by labderra          #+#    #+#             */
/*   Updated: 2024/11/26 14:19:57 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>


int	main(void)
{
	PhoneBook	awesome;
	std::string	option;
	std::string name;
	std::string surname;
	std::string nick;
	std::string number;
	std::string secret;
	int			id = -1;

	while (option != "X" && option != "EXIT" && !std::cin.eof())
	{
		std::cout << "\n\t\t\033[1mAwesomic Crappy PhoneBook App\033[0m\n" << std::endl;
		std::cout << "Options :  (A)DD  |  (S)EARCH  |  E(X)IT  |  select your option : ";
		std::getline(std::cin, option);
		if (option == "ADD" || option == "A")
		{
			std::cout << "\n\nFirst Name     : ";
			std::getline(std::cin, name);
			std::cout << "Last Name      : ";
			std::getline(std::cin, surname);
			std::cout << "Nickname       : ";
			std::getline(std::cin, nick);
			std::cout << "Phone N.       : ";
			std::getline(std::cin, number);
			std::cout << "Darkest Secret : ";
			std::getline(std::cin, secret);
			if (name.empty() || surname.empty() || nick.empty() || number.empty() || secret.empty())
				std::cout << "\033[2K\033[2K\033[2K\033[2K\033[2K\nMust fill all fields. Please try again!" << std::endl;
			else
				awesome.addContact(Contact(name, surname, nick, number, secret));
		}
		if (option == "SEARCH" || option == "S")
		{
			std::cout << "\n\n\t    Name       Surname    Nick       Phone" << '\n';
			std::cout << "\t-----------------------------------------------" << std::endl;
			awesome.getList();
			std::cout << "\t-----------------------------------------------" << std::endl;
			std::cout << "\n\tSelect Contact : " << std::flush;
			if (std::cin >> id && id >= 0 && id < 8)
				awesome.getContact(id);
			else
				std::cout << "Error" << std::endl;
		}
	}
}