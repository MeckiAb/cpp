/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:37:32 by labderra          #+#    #+#             */
/*   Updated: 2025/07/20 14:29:29 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {
	std::cout << "Default Animal Constructor called" << std::endl;
}

AAnimal::~AAnimal() {
	std::cout << "Animal Destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& a) {
	*this = a;
	std::cout << "Animal Copy Constructor called" << std::endl;
}

AAnimal&	AAnimal::operator=(const AAnimal& a) {
	std::cout << "Animal Asign Operator called" << std::endl;
	if (this != &a)
		this->type = a.type;
	return (*this);
}

std::string	AAnimal::getType(void) const {
	return (this->type);
}