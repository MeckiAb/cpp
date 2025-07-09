/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 20:08:37 by labderra          #+#    #+#             */
/*   Updated: 2024/12/02 18:50:37 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

#ifndef CONTACT_H
#include "Contact.hpp"


/*	Class Contact
---------------------*/

Contact::Contact(){
	
}

Contact::Contact(std::string first, std::string last, std::string nick,
		std::string phone, std::string secret)
{
	_first_name = first;
	_last_name = last;
	_nickname = nick;
	_phone_number = phone;
	_darkest_secret = secret;
}

Contact::~Contact(){
	
}

#endif