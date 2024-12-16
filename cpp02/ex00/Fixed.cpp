/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 13:16:08 by labderra          #+#    #+#             */
/*   Updated: 2024/12/16 20:54:20 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	this->value = 0;
}

Fixed::Fixed(const Fixed& f){
	this->value = f.value;
}

Fixed& Fixed::operator=(const Fixed& f){
	if (this == &f)
		return *this;
	
	this->value = f.value;
	return *this;
}

Fixed::~Fixed() {
	
}

int Fixed::getRawBits() const {
	return (this->value);
}

void Fixed::setRawBits(int const raw) {
	this->value = raw;
}