/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 11:12:01 by labderra          #+#    #+#             */
/*   Updated: 2025/07/30 00:07:20 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : ICharacter() , _name("Annonymous") {
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
	for (int i = 0; i < MAX_TILES; i++) {
		this->_floor[i] = NULL;
	}
}

Character::Character(std::string name) : ICharacter(), _name(name) {
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
	for (int i = 0; i < MAX_TILES; i++) {
		this->_floor[i] = NULL;
	}
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		delete _inventory[i];
	}
	for (int i = 0; i < MAX_TILES; i++) {
		delete _floor[i];
	}
}

Character::Character(Character const & copy) : ICharacter(), _name(copy._name) {
	for (int i = 0; i < 4; i++) {
		if (copy._inventory[i]) {
			this->_inventory[i] = copy._inventory[i]->clone();
		}
	}
	for (int i = 0; i < MAX_TILES; i++) {
		if (copy._floor[i]) {
			this->_floor[i] = copy._floor[i]->clone();
		}
	}
}

Character& Character::operator=(Character const & copy) {
	if (this != &copy) {
		this->_name = copy.getName();
		for (int i = 0; i < 4; i++) {
			if (this->_inventory[i]) {
				delete this->_inventory[i];
				this->_inventory[i] = NULL;
			}
		}
		for (int i = 0; i < MAX_TILES; i++) {
			if (this->_floor[i]) {
				delete this->_floor[i];
				this->_floor[i] = NULL;
			}
		}
		for (int i = 0; i < 4; i++) {
			if (copy._inventory[i]) {
				this->_inventory[i] = copy._inventory[i]->clone();
			}
		}
		for (int i = 0; i < MAX_TILES; i++) {
			if (copy._floor[i]) {
				this->_floor[i] = copy._floor[i]->clone();
			}
		}
	}
	return (*this);
}

std::string const & Character::getName() const {
	return (this->_name);
}

void Character::unequip(int idx) {
	if (!this->_inventory[idx]) return ;
	for (int i = 0; i < MAX_TILES; i++) {
		if (!this->_floor[i]) {
			this->_floor[i] = this->_inventory[idx];
			this->_inventory[idx] = NULL;
			return ;
		}
	}
	std::cout << "Nowhere to drop that!" << std::endl;
}

void Character::use(int idx, ICharacter& target) {
	if (this->_inventory[idx]) {
		this->_inventory[idx]->use(target);
	}
}

void Character::equip(AMateria* m) {
	int idx;
	for (idx = 0; idx < 4; idx++) {
		if (!this->_inventory[idx]) {
			this->_inventory[idx] = m;
			break ;
		}
	}
	if (idx == 4) delete (m);
}