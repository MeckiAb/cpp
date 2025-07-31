/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 10:44:39 by labderra          #+#    #+#             */
/*   Updated: 2025/07/30 11:20:30 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << "Ice Constructor" << std::endl;
}

Ice::Ice(std::string const & type) : AMateria(type) {
	std::cout << "Ice Constructor" << std::endl;
}

Ice::~Ice() {
	std::cout << "Ice Destructor" << std::endl;
}

Ice::Ice(AMateria const & copy) : AMateria(copy.getType()) {
	std::cout << "Ice Copy" << std::endl;
}

AMateria& Ice::operator=(AMateria const & copy) {
	std::cout << "Ice Copy Operator" << std::endl;
	if (this != &copy){
		this->_type = copy.getType();
	}
	return (*this);
}

AMateria* Ice::clone() const {
	std::cout << "Ice Clone" << std::endl;
	return (new Ice());
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}