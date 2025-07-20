/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:37:32 by labderra          #+#    #+#             */
/*   Updated: 2025/07/18 10:44:19 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "Default WrongAnimal Constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& a) {
	*this = a;
	std::cout << "WrongAnimal Copy Constructor called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& a) {
	std::cout << "WrongAnimal Asign Operator called" << std::endl;
	if (this != &a)
		this->type = a.type;
	return (*this);
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "[Indeterminate WrongAnimal Sound]" << std::endl;
}

std::string	WrongAnimal::getType(void) const {
	return (this->type);
}