/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 20:08:37 by labderra          #+#    #+#             */
/*   Updated: 2025/07/15 13:24:27 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

#ifndef CONTACT_H
#include "Contact.hpp"


/*	Class Contact
---------------------*/

Contact::Contact() {
}

Contact::Contact(std::string first, std::string last, std::string nick,
std::string phone, std::string secret) {
	_first_name = first;
	_last_name = last;
	_nickname = nick;
	_phone_number = phone;
	_darkest_secret = secret;
}

Contact::~Contact(){
}

void	Contact::setFirstName(std::string s) {
	this->_first_name = s;
}

void	Contact::setLastName(std::string s) {
	this->_last_name = s;
}

void	Contact::setNickname(std::string s) {
	this->_nickname = s;
}

void	Contact::setPhoneNumber(std::string s) {
	this->_phone_number = s;
}

void	Contact::setDarkestSecret(std::string s) {
	this->_darkest_secret = s;
}
	
std::string& Contact::getFirstName(void) {
	return (this->_first_name);
}

std::string& Contact::getLastName(void) {
	return (this->_last_name);
}

std::string& Contact::getNickname(void) {
	return (this->_nickname);
}

std::string& Contact::getPhoneNumber(void) {
	return (this->_phone_number);
}

std::string& Contact::getDarkestSecret(void) {
	return (this->_darkest_secret);
}

#endif