/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:37:32 by labderra          #+#    #+#             */
/*   Updated: 2025/07/18 12:57:16 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
	this->type = "Cat";
	this->_catBrain = new Brain();
	std::cout << "Default Cat Constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat Destructor called" << std::endl;
	delete this->_catBrain;
}

Cat::Cat(const Cat& d) : Animal(d){
	*this = d;
	this->_catBrain = d._catBrain;
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
