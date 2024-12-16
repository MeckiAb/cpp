/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 14:13:40 by labderra          #+#    #+#             */
/*   Updated: 2024/12/16 11:44:25 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) {
	
	if (argc != 2)
		return (1);
		
	Harl customer;
	std::string level = argv[1];
	int levelCode = 4 * (level == "DEBUG") + 3 * (level == "INFO") 
		+ 2 * (level == "WARNING") + (level == "ERROR");

	switch (levelCode)
	{
	case 4:
		customer.complain("DEBUG");
	case 3:
		customer.complain("INFO");
	case 2:
		customer.complain("WARNING");
	case 1:
		customer.complain("ERROR");
		break;
	default:
		customer.complain(level);
		break;
	}
	return (0);
}