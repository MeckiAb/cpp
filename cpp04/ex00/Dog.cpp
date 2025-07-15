/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:37:32 by labderra          #+#    #+#             */
/*   Updated: 2025/07/15 19:40:22 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
	this->type = "Dog";
	std::cout << "Default Dog Constructor called" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog Destructor called" << std::endl;

}

Dog::Dog(const Dog& d) : Animal(d){
	*this = d;
	std::cout << "Dog Copy Constructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog& d) {
	std::cout << "Dog Asign Operator called" << std::endl;
	if (this != &d)
		this->type = d.type;
	return (*this);
}

void	Dog::makeSound(void) const {
	std::cout << "Guau, Guau! ... Grrrr... Guuuoff!!" << std::endl;
}
