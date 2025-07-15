/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 20:59:04 by labderra          #+#    #+#             */
/*   Updated: 2025/07/15 11:08:07 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap::ClapTrap(), _gateKeeperMode(0) {
	std::cout << "ScavTrap Default constructor called" << std::endl;
	this->_name = "ScavTrap Default";
	this->_health = 100;
	this->_energy = 50;
	this->_damage = 20;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap::ClapTrap(name), _gateKeeperMode(0) {
	std::cout << "ScavTrap Parametric constructor called" << std::endl;
	this->_health = 100;
	this->_energy = 50;
	this->_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& c) {
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = c;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& c) {
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	if (this == &c)
		return (*this);
	this->_name = c._name;
	this->_health = c._health;
	this->_energy = c._energy;
	this->_damage = c._damage;
	this->_gateKeeperMode = c._gateKeeperMode;
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor called " << std::endl;
}
    
void	ScavTrap::attack(const std::string& target) {
	if (this->_gateKeeperMode) {
		std::cout << "ScavTrap " << this->_name << " is in GateKeeper Mode. Can not attack." << std::endl;
		return;
	}
	if (this->_energy && this->_health) {
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing "<< this->_damage << " points of damage!" << std::endl;
		this->_energy -= 1;
	}
	else
		std::cout << "ScavTrap " << this->_name << " can not take any actions." << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount) {
	if (this->_gateKeeperMode) {
		std::cout << "ScavTrap " << this->_name << " is in GateKeeper Mode. No damage suffered." << std::endl;
		return;
	}
	if (this->_health > amount) {
		std::cout << "ScavTrap " << this->_name << " suffers " << amount << " points of damage!" << std::endl;
		this->_health -= amount;
		return;
	}
	if (this->_health) {
		std::cout << "ScavTrap " << this->_name << " suffers " << amount << " points of damage and is destroyed!" << std::endl;
		this->_health = 0;
	}
	else
	std::cout << "ScavTrap " << this->_name << " was already destroyed!" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount) {
	if (this->_energy) {
		std::cout << "ScavTrap " << this->_name << " recovers " << amount << " points of health!" << std::endl;
		this->_health += amount;
		this->_energy -= 1;
	}
	else
		std::cout << "ScavTrap " << this->_name << " can not take any actions." << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->_name;
	if (!this->_gateKeeperMode) {
		this->_gateKeeperMode = true;
		std::cout << " enters GateKeeper Mode" << std::endl;
	} 
	else {
		this->_gateKeeperMode = false;
		std::cout << " exits GateKeeper Mode" << std::endl;
	}
}