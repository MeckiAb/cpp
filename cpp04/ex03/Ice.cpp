/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 10:44:39 by labderra          #+#    #+#             */
/*   Updated: 2025/07/25 10:55:33 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria(), _type("") {
}

Ice::Ice(std::string const & type) : AMateria(), _type(type) {
}

Ice::~Ice() {
}

Ice::Ice(AMateria const & copy) : AMateria(), _type(copy.getType()){
}

AMateria& Ice::operator=(AMateria const & copy) {
	if (this != &copy)
		return(*copy.clone());
	return (*this);
}

AMateria* Ice::clone() const {
	return (new Ice(this->getType()));
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}