/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 19:40:22 by labderra          #+#    #+#             */
/*   Updated: 2025/07/15 11:42:19 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main() {
	std::cout << "--- CREATE INSTANCES ---" << std::endl;
	ScavTrap NoName;
	ScavTrap Hollie = ScavTrap("Hollie");
	
	std::cout << "\n--- ATTACK ACTION ---" << std::endl;
	Hollie.attack("Enemy");
	Hollie.attack("Johnie");
	
	std::cout << "\n--- TAKES DAMAGE, STILL ALIVE ---" << std::endl;
	Hollie.takeDamage(99);
	Hollie.attack("Another Enemy");
	
	std::cout << "\n--- ENTERS GATEKEEPER, TAKES DAMAGE AND ATTACKS ---" << std::endl;
	Hollie.guardGate();
	Hollie.takeDamage(99);
	Hollie.attack("While GateKeeper Mode");

	std::cout << "\n--- TAKES DAMAGE, IS DESTROYED ---" << std::endl;
	Hollie.guardGate();
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
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");
	Hollie.attack("Dummy");


	std::cout << "\n--- MAKES COPY, STILL EXHAUSTED ---" << std::endl;
	ScavTrap Johnie = ScavTrap(Hollie);
	Johnie.attack("Dummy");
	Johnie.~ScavTrap();
	Johnie = Hollie;
	Johnie.attack("Dummy");
	
	return(0);
}
