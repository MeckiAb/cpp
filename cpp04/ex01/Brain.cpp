/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:07:18 by labderra          #+#    #+#             */
/*   Updated: 2025/07/18 13:02:03 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain Default Destructor called" << std::endl;
}

Brain::Brain(Brain& b) {
	std::cout << "Brain Copy Constructor called" << std::endl;
	for(int i=0; i<100; i++) {
		_ideas[i] = b._ideas[i];
	}
}

Brain&	Brain::operator=(const Brain& b) {
	std::cout << "Brain Copy Operator called" << std::endl;
	if (this != &b) {
		for(int i=0; i<100; i++) {
			this->_ideas[i] = b._ideas[i];
		}		
	}
	return (*this);
}

std::string& Brain::operator[](const int i) {
	if (i >= 0 && i<100)
		return (this->_ideas[i]);
	else {
		std::cout << "Error. Idea Out of Bounds" << std::endl;
		//return (NULL);
	}
}

const std::string& Brain::operator[](const int i) const {
	if (i >= 0 && i<100)
		return (this->_ideas[i]);
	else {
		std::cout << "Error. Idea Out of Bounds" << std::endl;
		return (NULL);
	}
}

