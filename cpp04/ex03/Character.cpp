/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 11:12:01 by labderra          #+#    #+#             */
/*   Updated: 2025/07/25 12:14:36 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : ICharacter(), _name(string("Anonimous")){
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
}

Character::Character(std::string name) : ICharacter(), _name(name) {
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		 delete _inventory[i];
	}
}

Character::Character(Character const & copy) : ICharacter(), _name(copy._name) {
	for (int i = 0; i < 4; i++) {
		if (copy._inventory[i]) {
			this->_inventory[i] = copy._inventory[i]->clone();
		}
	}
}

Character& Character::operator=(Character const & copy) {
	if (this != &copy) {
		this->_name = copy.getName();
		for (int i = 0; i < 4; i++) {
			if (copy._inventory[i]) {
				this->_inventory[i] = copy._inventory[i]->clone();
			}
		}
	}
	return (*this);
}

std::string const & Character::getName() const {
	return (this->_name);
}

void Character::unequip(int idx);
void Character::use(int idx, ICharacter& target);
void Character::equip(AMateria* m);