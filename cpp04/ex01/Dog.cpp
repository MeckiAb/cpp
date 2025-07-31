/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:37:32 by labderra          #+#    #+#             */
/*   Updated: 2025/07/31 15:24:11 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <sstream>

Dog::Dog() : Animal() {
	this->type = "Dog";
	this->_dogBrain = new Brain();
	std::stringstream ss;
	for (int i=0; i < 100; i++) {
		ss << "Guau number " << i << std::flush;
		this->_dogBrain->setIdea(i, ss.str());
		ss.str("");
	}
	std::cout << "Default Dog Constructor called" << std::endl;
	
}

Dog::~Dog() {
	std::cout << "Dog Destructor called" << std::endl;
	delete this->_dogBrain;
}

Dog::Dog(const Dog& d) : Animal(d){
	*this = d;
	this->_dogBrain = new Brain(*d._dogBrain);
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

void	Dog::think(const int i) const {
	std::cout << this->_dogBrain->getIdea(i) << std::endl;
}
