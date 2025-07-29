/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 10:44:39 by labderra          #+#    #+#             */
/*   Updated: 2025/07/29 13:34:14 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
}

Cure::Cure(std::string const & type) : AMateria(type) {
}

Cure::~Cure() {
}

Cure::Cure(AMateria const & copy) : AMateria(copy.getType()) {
}

AMateria& Cure::operator=(AMateria const & copy) {
	if (this != &copy)
		this->_type = copy.getType();
	return (*this);
}

AMateria* Cure::clone() const {
	return (new Cure(this->getType()));
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}