/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 10:44:39 by labderra          #+#    #+#             */
/*   Updated: 2025/07/22 13:37:49 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria(), _type("") {
}

Cure::Cure(std::string const & type) : AMateria(), _type(type) {
}

Cure::~Cure() {
}

Cure::Cure(AMateria const & copy) : AMateria(), _type(copy.getType()){
}

AMateria& Cure::operator=(AMateria const & copy) {
	if (this != &copy)
		return(*copy.clone());
	return (*this);
}

AMateria* Cure::clone() const {
	return (new Cure(this->getType()));
}

void Cure::use(ICharacter& target) {}