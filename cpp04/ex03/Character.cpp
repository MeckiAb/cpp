/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 11:12:01 by labderra          #+#    #+#             */
/*   Updated: 2025/07/31 15:53:46 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : ICharacter() , _name("Annonymous") {
	std::cout << "Character Constructor" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
	for (int i = 0; i < MAX_TILES; i++) {
		this->_floor[i] = NULL;
	}
}

Character::Character(std::string name) : ICharacter(), _name(name) {
	std::cout << "Character Constructor" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
	for (int i = 0; i < MAX_TILES; i++) {
		this->_floor[i] = NULL;
	}
}

Character::~Character() {
	std::cout << "Character Destructor" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i]) delete (_inventory[i]);
	}
	for (int i = 0; i < MAX_TILES; i++) {
		if (this->_floor[i]) delete (_floor[i]);
	}
}

Character::Character(Character const & copy) : ICharacter(), _name(copy._name) {
	std::cout << "Character Copy" << std::endl;
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
	std::cout << "Character Copy Operator" << std::endl;
	if (this != &copy) {
		this->_name = copy.getName();
		for (int i = 0; i < 4; i++) {
			if (this->_inventory[i]) {
				delete this->_inventory[i];
				this->_inventory[i] = copy._inventory[i]->clone();
			}
		}
		for (int i = 0; i < MAX_TILES; i++) {
			if (this->_floor[i]) {
				delete this->_floor[i];
				this->_floor[i] = copy._floor[i]->clone();
			}
		}
	}
	return (*this);
}

std::string const & Character::getName() const {
//	std::cout << "Character getName" << std::endl;
	return (this->_name);
}

void Character::unequip(int idx) {
	std::cout << "Character unequip" << std::endl;
	if (!this->_inventory[idx]) return ;
	for (int i = 0; i < MAX_TILES; i++) {
		if (!this->_floor[i]) {
			this->_floor[i] = this->_inventory[idx];
			this->_inventory[idx] = NULL;
			return ;
		}
	}
	std::cout << "Character unequip Failed" << std::endl;
}

void Character::use(int idx, ICharacter& target) {
	if (this->_inventory[idx]) {
		this->_inventory[idx]->use(target);
	}
}

void Character::equip(AMateria* m) {
	std::cout << "Character equip" << std::endl;
	int idx;
	for (idx = 0; idx < 4; idx++) {
		if (!this->_inventory[idx]) {
			this->_inventory[idx] = m;
			break ;
		}
	}
	if (idx == 4) {
		std::cout << "Character equip Failed" << std::endl;
		delete (m);
	}
}