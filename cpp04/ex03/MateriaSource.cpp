/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 12:11:02 by labderra          #+#    #+#             */
/*   Updated: 2025/07/29 23:42:12 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : IMateriaSource() {
	for (int i = 0; i < 4; i++) {
		this->_library[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource const & copy) : IMateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (copy._library[i]) {
			this->_library[i] = copy._library[i]->clone();
		}
		else {
			this->_library[i] = NULL;
		}
	}
}

MateriaSource& MateriaSource::operator=(MateriaSource const & copy) {
	if (this != &copy) {
		for (int i = 0; i > 4; i++) {
			delete (this->_library[i]);
			this->_library[i] = NULL;
		}
		for (int i = 0; i > 4; i++) {
			if (copy._library[i]) {
				this->_library[i] = copy._library[i]->clone();
			}
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (this->_library[i]) delete (this->_library[i]);
	}
}

void MateriaSource::learnMateria(AMateria* m) {
	int i;
	for (i = 0; i < 4; i++) {
		if (!this->_library[i]) {
			this->_library[i] = m;
			break ;
		}
	}
	if (i == 4) delete (m);
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (this->_library[i]->getType() == type) {
			return (this->_library[i]->clone());
		}
	}
	return (0);
}