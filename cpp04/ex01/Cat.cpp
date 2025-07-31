/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:37:32 by labderra          #+#    #+#             */
/*   Updated: 2025/07/31 14:44:00 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <sstream>

Cat::Cat() : Animal() {
	this->type = "Cat";
	this->_catBrain = new Brain();
	std::stringstream ss;
	for (int i=0; i < 100; i++) {
		ss << "Miaou number " << i << std::flush;
		this->_catBrain->setIdea(i, ss.str());
		ss.str("");
	}
	std::cout << "Default Cat Constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat Destructor called" << std::endl;
	delete this->_catBrain;
}

Cat::Cat(const Cat& d) : Animal(d){
	*this = d;
	this->_catBrain = new Brain(*d._catBrain);
	std::cout << "Cat Copy Constructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat& d) {
	std::cout << "Cat Asign Operator called" << std::endl;
	if (this != &d) {
		this->type = d.type;
		this->_catBrain = d._catBrain;
	}
	return (*this);
}

void	Cat::makeSound(void) const {
	std::cout << "Miaooouu... Fffffhhh!!!" << std::endl;
}

void	Cat::think(const int i) const {
	std::cout << this->_catBrain->getIdea(i) << std::endl;
}
