/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 10:44:39 by labderra          #+#    #+#             */
/*   Updated: 2025/07/30 11:18:36 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << "Cure Constructor" << std::endl;
}

Cure::Cure(std::string const & type) : AMateria(type) {
	std::cout << "Cure Constructor" << std::endl;
}

Cure::~Cure() {
	std::cout << "Cure Destructor" << std::endl;
}

Cure::Cure(AMateria const & copy) : AMateria(copy.getType()) {
	std::cout << "Cure Copy" << std::endl;
}

AMateria& Cure::operator=(AMateria const & copy) {
	std::cout << "Cure Copy Operator" << std::endl;
	if (this != &copy)
		this->_type = copy.getType();
	return (*this);
}

AMateria* Cure::clone() const {
	std::cout << "Cure Clone" << std::endl;
	return (new Cure(this->getType()));
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}