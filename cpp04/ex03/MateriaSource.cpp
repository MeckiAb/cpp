/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 12:11:02 by labderra          #+#    #+#             */
/*   Updated: 2025/07/30 11:23:54 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : IMateriaSource() {
	std::cout << "Source Constructor" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->_library[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource const & copy) : IMateriaSource() {
	std::cout << "Source Copy" << std::endl;
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
	std::cout << "Source Copy Operator" << std::endl;
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
	std::cout << "Source Destructor" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->_library[i]) delete (this->_library[i]);
	}
}

void MateriaSource::learnMateria(AMateria* m) {
	std::cout << "Source learnMateria" << std::endl;
	int i;
	for (i = 0; i < 4; i++) {
		if (!this->_library[i]) {
			this->_library[i] = m;
			break ;
		}
	}
	if (i == 4) {
		std::cout << "Source learnMateria Failed" << std::endl;
		delete (m);
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	std::cout << "Source createMateria" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->_library[i]->getType() == type) {
			return (this->_library[i]->clone());
		}
	}
	std::cout << "Source createMateria Failed" << std::endl;
	return (0);
}