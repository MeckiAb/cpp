/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 20:59:04 by labderra          #+#    #+#             */
/*   Updated: 2025/07/15 11:59:00 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap::ClapTrap() {
	std::cout << "FragTrap Default constructor called" << std::endl;
	this->_name = "FragTrap Default";
	this->_health = 100;
	this->_energy = 100;
	this->_damage = 30;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap::ClapTrap(name) {
	std::cout << "FragTrap Parametric constructor called" << std::endl;
	this->_health = 100;
	this->_energy = 100;
	this->_damage = 30;
}

FragTrap::FragTrap(const FragTrap& c) {
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = c;
}

FragTrap& FragTrap::operator=(const FragTrap& c) {
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	if (this == &c)
		return (*this);
	this->_name = c._name;
	this->_health = c._health;
	this->_energy = c._energy;
	this->_damage = c._damage;
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Destructor called " << std::endl;
}
    
void	FragTrap::attack(const std::string& target) {
	if (this->_energy && this->_health) {
		std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing "<< this->_damage << " points of damage!" << std::endl;
		this->_energy -= 1;
	}
	else
		std::cout << "FragTrap " << this->_name << " can not take any actions." << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount) {
	if (this->_health > amount) {
		std::cout << "FragTrap " << this->_name << " suffers " << amount << " points of damage!" << std::endl;
		this->_health -= amount;
		return;
	}
	if (this->_health) {
		std::cout << "FragTrap " << this->_name << " suffers " << amount << " points of damage and is destroyed!" << std::endl;
		this->_health = 0;
	}
	else
	std::cout << "FragTrap " << this->_name << " was already destroyed!" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount) {
	if (this->_energy) {
		std::cout << "FragTrap " << this->_name << " recovers " << amount << " points of health!" << std::endl;
		this->_health += amount;
		this->_energy -= 1;
	}
	else
		std::cout << "FragTrap " << this->_name << " can not take any actions." << std::endl;
}

void	FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << this->_name;
	if (!this->_energy) {
		std::cout << " can not take any actions." << std::endl;
	} 
	else {
		std::cout << " says: High Five, Guys!" << std::endl;
	}
}