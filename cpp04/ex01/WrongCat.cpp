/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:37:32 by labderra          #+#    #+#             */
/*   Updated: 2025/07/18 10:45:56 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	this->type = "WrongCat";
	std::cout << "Default WrongCat Constructor called" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat Destructor called" << std::endl;

}

WrongCat::WrongCat(const WrongCat& d) : WrongAnimal(d){
	*this = d;
	std::cout << "WrongCat Copy Constructor called" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& d) {
	std::cout << "WrongCat Asign Operator called" << std::endl;
	if (this != &d)
		this->type = d.type;
	return (*this);
}

void	WrongCat::makeSound(void) const {
	std::cout << "Miaooouu... Fffffhhh!!!" << std::endl;
}
