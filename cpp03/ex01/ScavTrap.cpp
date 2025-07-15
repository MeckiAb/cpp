/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 20:59:04 by labderra          #+#    #+#             */
/*   Updated: 2025/07/15 09:50:33 by labderra         ###   ########.fr       */
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
    
void	ScavTrap::attack(const std::string& target);
void	ScavTrap::takeDamage(unsigned int amount);
void	ScavTrap::beRepaired(unsigned int amount);
void	ScavTrap::guardGate();