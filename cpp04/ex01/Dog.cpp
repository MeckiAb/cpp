/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:37:32 by labderra          #+#    #+#             */
/*   Updated: 2025/07/18 12:58:45 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
	this->type = "Dog";
	this->_dogBrain = new Brain();
	std::cout << "Default Dog Constructor called" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog Destructor called" << std::endl;
	delete this->_dogBrain;
}

Dog::Dog(const Dog& d) : Animal(d){
	*this = d;
	this->_dogBrain = d._dogBrain;
	std::cout << "Dog Copy Constructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog& d) {
	std::cout << "Dog Asign Operator called" << std::endl;
	if (this != &d) {
		this->type = d.type;
		this->_dogBrain = d._dogBrain;
	}
	return (*this);
}

void	Dog::makeSound(void) const {
	std::cout << "Guau, Guau! ... Grrrr... Guuuoff!!" << std::endl;
}
