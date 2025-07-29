/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 19:40:22 by labderra          #+#    #+#             */
/*   Updated: 2025/07/29 10:14:08 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main() {
	std::cout << "--- CREATE INSTANCES ---" << std::endl;
	FragTrap NoName;
	FragTrap Francis = FragTrap("Francis");
	
	std::cout << "\n--- ATTACK ACTION ---" << std::endl;
	Francis.attack("Enemy");
	Francis.attack("Johnie");
	
	std::cout << "\n--- TAKES DAMAGE, STILL ALIVE ---" << std::endl;
	Francis.takeDamage(99);
	Francis.attack("Another Enemy");
	
	std::cout << "\n--- HIGH FIVES, TAKES DAMAGE AND ATTACKS ---" << std::endl;
	Francis.highFivesGuys();
	Francis.takeDamage(1);
	Francis.attack("Last Enemy");

	std::cout << "\n--- TAKES DAMAGE, IS DESTROYED ---" << std::endl;
	Francis.takeDamage(1);
	Francis.attack("Last Enemy");

	std::cout << "\n--- IS REPAIRED, USES ALL ENERGY ---" << std::endl;
	Francis.beRepaired(10);
	for (int i = 0; i < 97; i++) {
		Francis.attack("Dummy");
	}
	
	std::cout << "\n--- MAKES COPY, STILL EXHAUSTED ---" << std::endl;
	FragTrap Johnie = FragTrap(Francis);
	Johnie.attack("Dummy");
	Johnie.~FragTrap();
	Johnie = Francis;
	Johnie.attack("Dummy");
	
	return(0);
}
