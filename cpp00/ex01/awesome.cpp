/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   awesome.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:33:50 by labderra          #+#    #+#             */
/*   Updated: 2024/11/25 13:54:27 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>


int	main(void)
{
	PhoneBook	awesome;
	Contact		new_contact;
	std::string	option;
	
	while (option != "X" && option != "EXIT")
	{
		std::cout << "\n\t\t\033[1mAwesomic Crappy PhoneBook App\033[0m\n" << std::endl;
		std::cout << "Options :  (A)DD  |  (S)EARCH  |  E(X)IT  |  select your option : " << std::flush;
		std::cin >> option;
		if (option == "ADD" || option == "A")
		{
			std::cout << "add" << std::endl;
		}
		if (option == "SEARCH" || option == "S")
		{
			std::cout << "search" << std::endl;
		}
	}
}