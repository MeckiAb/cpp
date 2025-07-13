/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 19:40:56 by labderra          #+#    #+#             */
/*   Updated: 2025/07/13 16:32:32 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"), _health(10), _energy(10), _damage(0) {
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _health(10), _energy(10), _damage(0) {
	std::cout << "Parametric constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& c) : _name(c._name), _health(c._health), _energy(c._energy), _damage(c._damage) {
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& c) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &c)
		return (*this);
	this->_name = c._name;
	this->_health = c._health;
	this->_energy = c._energy;
	this->_damage = c._damage;
	return (*this);    
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called " << std::endl;
}
    
void	ClapTrap::attack(const std::string& target){
	if (this->_energy && this->_health) {
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing "<< this->_damage << " points of damage!" << std::endl;
		this->_energy -= 1;
	}
	else
		std::cout << "ClapTrap " << this->_name << " can not take any actions." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (this->_health > amount) {
		std::cout << "ClapTrap " << this->_name << " suffers " << amount << " points of damage!" << std::endl;
		this->_health -= amount;
	}
	else if (this->_health) {
		std::cout << "ClapTrap " << this->_name << " suffers " << amount << " points of damage and is destroyed!" << std::endl;
		this->_health = 0;
	}
	else
	std::cout << "ClapTrap " << this->_name << " was already destroyed!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (this->_energy) {
		std::cout << "ClapTrap " << this->_name << " recovers " << amount << " points of health!" << std::endl;
		this->_health += amount;
		this->_energy -= 1;
	}
	else
		std::cout << "ClapTrap " << this->_name << " can not take any actions." << std::endl;
}
