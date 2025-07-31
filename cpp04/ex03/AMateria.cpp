/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 10:27:25 by labderra          #+#    #+#             */
/*   Updated: 2025/07/30 11:50:50 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("Anon") {
	//std::cout << "Abstract Materia Constructor" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type) {
	//std::cout << "Abstract Materia Constructor" << std::endl;
}

AMateria::AMateria(AMateria const & copy) : _type(copy.getType()) {
	//std::cout << "Abstract Materia Copy" << std::endl;
}

AMateria::~AMateria() {
	//std::cout << "Abstract Materia Destructor" << std::endl;
}

std::string const & AMateria::getType(void) const {
	//std::cout << "Abstract Materia getType" << std::endl;
	return (this->_type);
}

void AMateria::use(ICharacter& target) {
	std::cout << "* undefined materia used against " << target.getName() << " *" << std::endl;
}