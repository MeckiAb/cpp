/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 10:44:39 by labderra          #+#    #+#             */
/*   Updated: 2025/07/29 13:33:17 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
}

Ice::Ice(std::string const & type) : AMateria(type) {
}

Ice::~Ice() {
}

Ice::Ice(AMateria const & copy) : AMateria(copy.getType()) {
}

AMateria& Ice::operator=(AMateria const & copy) {
	if (this != &copy){
		this->_type = copy.getType();
	}
	return (*this);
}

AMateria* Ice::clone() const {
	return (new Ice());
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}