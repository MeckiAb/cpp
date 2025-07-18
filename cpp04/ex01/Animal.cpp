/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:37:32 by labderra          #+#    #+#             */
/*   Updated: 2025/07/15 19:39:58 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Default Animal Constructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal Destructor called" << std::endl;
}

Animal::Animal(const Animal& a) {
	*this = a;
	std::cout << "Animal Copy Constructor called" << std::endl;
}

Animal&	Animal::operator=(const Animal& a) {
	std::cout << "Animal Asign Operator called" << std::endl;
	if (this != &a)
		this->type = a.type;
	return (*this);
}

void	Animal::makeSound(void) const {
	std::cout << "[Indeterminate Animal Sound]" << std::endl;
}

std::string	Animal::getType(void) const {
	return (this->type);
}