/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 19:40:22 by labderra          #+#    #+#             */
/*   Updated: 2025/07/13 16:40:00 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main() {
	std::cout << "--- CREATE INSTANCES ---" << std::endl;
	ClapTrap NoName;
	ClapTrap Hollie = ClapTrap("Hollie");
	
	std::cout << "\n--- ATTACK ACTION ---" << std::endl;
	Hollie.attack("Enemy");
	Hollie.attack("Johnie");
	
	std::cout << "\n--- TAKES DAMAGE, STILL ALIVE ---" << std::endl;
	Hollie.takeDamage(9);
	Hollie.attack("Another Enemy");

	std::cout << "\n--- TAKES DAMAGE, IS DESTROYED ---" << std::endl;
	Hollie.takeDamage(1);
	Hollie.attack("Last Enemy");

	std::cout << "\n--- IS REPAIRED, USES ALL ENERGY ---" << std::endl;
	Hollie.beRepaired(10);
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");

	std::cout << "\n--- MAKES COPY, STILL EXHAUSTED ---" << std::endl;
	ClapTrap Johnie = ClapTrap(Hollie);
	Johnie.attack("Dummy");
	Johnie.~ClapTrap();
	Johnie = Hollie;
	Johnie.attack("Dummy");
	
	return(0);
}
