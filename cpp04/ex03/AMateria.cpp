/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 10:27:25 by labderra          #+#    #+#             */
/*   Updated: 2025/07/29 13:22:55 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("Anon") {}

AMateria::AMateria(std::string const & type) : _type(type) {}

AMateria::AMateria(AMateria const & copy) : _type(copy.getType()) {}

AMateria::~AMateria() {}

std::string const & AMateria::getType(void) const {
	return (this->_type);
}

void AMateria::use(ICharacter& target) {
	std::cout << "* undefined materia used against " << target.getName() << " *" << std::endl;
}