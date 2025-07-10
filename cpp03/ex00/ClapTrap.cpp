/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 19:40:56 by labderra          #+#    #+#             */
/*   Updated: 2025/07/10 21:00:48 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    std::cout << "Default constructor called" << std::endl;
    this->_health = 10;
    this->_energy = 10;
    this->_damage = 0;
}

ClapTrap::ClapTrap(const std::string& name) {
    std::cout << "Default constructor called" << std::endl;
    this->_name = name;
    this->_health = 10;
    this->_energy = 10;
    this->_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& c) : 
    _name(c._name), _health(c._health), _energy(c._energy), _damage(c._damage) 
{
    std::cout << "Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& c) {
	std::cout << "Copy assignment operator called" << std::endl;
    if (this == &c)
        return (*this);
    ClapTrap t = ClapTrap(c);
    return (t);    
}

ClapTrap::~ClapTrap() {
    
}
    
void    ClapTrap::attack(const std::string& target){
    
}

void    ClapTrap::takeDamage(unsigned int amount){
    
}

void    ClapTrap::beRepaired(unsigned int amount){
    
}
