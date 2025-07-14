/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 20:59:04 by labderra          #+#    #+#             */
/*   Updated: 2025/07/14 21:20:42 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : 
ClapTrap::ClapTrap(), 
ClapTrap._name("ScavTrap Default"),
ClapTrap._health(),
_energy(),
_damage(),
_gateKeeperMode(0) {
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap::ClapTrap(name), _gateKeeperMode(0) {
	std::cout << "ScavTrap Parametric constructor called" << std::endl;

}

ScavTrap::ScavTrap(const ScavTrap& c);
ScavTrap::ScavTrap& operator=(const ScavTrap& c);
ScavTrap::~ScavTrap();
    
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	guardGate();