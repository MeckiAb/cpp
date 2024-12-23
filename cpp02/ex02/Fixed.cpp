/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 13:16:08 by labderra          #+#    #+#             */
/*   Updated: 2024/12/23 14:36:23 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}

Fixed::Fixed(const Fixed& f){
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(f.getRawBits());
}

Fixed::Fixed(const int n) {
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(n << this->fraction);
}

Fixed::Fixed(const float f) {
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(static_cast<int>(roundf(f * pow( 2, this->fraction))));
}

void Fixed::swap( Fixed& f) {
	std::swap(this->value, f.value);
}

Fixed& Fixed::operator=( Fixed f ) {
	std::cout << "Copy assignment operator called" << std::endl;
	swap(f);
	return (*this);
}

int Fixed::operator<( const Fixed& f) {
	return ( this->getRawBits() < f.getRawBits());
}

int Fixed::operator>( const Fixed& f) {
	return ( this->getRawBits() > f.getRawBits());
}

int Fixed::operator<=( const Fixed& f) {
	return ( this->getRawBits() <= f.getRawBits());
}

int Fixed::operator>=( const Fixed& f) {
	return ( this->getRawBits() >= f.getRawBits());
}

int Fixed::operator==( const Fixed& f) {
	return ( this->getRawBits() == f.getRawBits());
}

int Fixed::operator!=( const Fixed& f) {
	return ( this->getRawBits() != f.getRawBits());
}

Fixed& Fixed::operator+=( const Fixed& f) {
	this->setRawBits(this->getRawBits() + f.getRawBits());
	return *this;
}

Fixed Fixed::operator+( const Fixed& f ) {
	Fixed result(f);
	result += *this;
	return (result);	
}

Fixed& Fixed::operator-=( const Fixed& f) {
	this->setRawBits(this->getRawBits() - f.getRawBits());
	return *this;
}

Fixed Fixed::operator-( const Fixed& f ) {
	Fixed result(f);
	result -= *this;
	return (result);	
}

Fixed& Fixed::operator*=( const Fixed& f) {
	this->setRawBits(this->getRawBits() + f.getRawBits());
	return *this;
}

Fixed Fixed::operator*( const Fixed& f ) {
	Fixed result(f);
	result += *this;
	return (result);	
}

Fixed& Fixed::operator/=( const Fixed& f) {
	this->setRawBits(this->getRawBits() + f.getRawBits());
	return *this;
}

Fixed Fixed::operator/( const Fixed& f ) {
	Fixed result(f);
	result += *this;
	return (result);	
}


Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
	return (this->value);
}

void Fixed::setRawBits(int const raw) {
	this->value = raw;
}

float Fixed::toFloat( void ) const {
	float f = static_cast<float>(this->getRawBits() / pow(2, this->fraction));
	return ((f));
}

int Fixed::toInt( void ) const {
	return (this->getRawBits() / pow(2, this->fraction));
}

std::ostream& operator<<(std::ostream& os, const Fixed& f) {
	return (os << f.toFloat());
}