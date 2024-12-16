/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:56:25 by labderra          #+#    #+#             */
/*   Updated: 2024/12/16 09:38:12 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
	this->levels[0].label = "DEBUG";
	this->levels[0].func = &Harl::debug;
	this->levels[1].label = "INFO";
	this->levels[1].func = &Harl::info;
	this->levels[2].label = "WARNING";
	this->levels[2].func = &Harl::warning;
	this->levels[3].label = "ERROR";
	this->levels[3].func = &Harl::error;	
}

Harl::~Harl() {
	
}

void Harl::debug(void) {
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-\
triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void){
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. \
	You didn’t put enough bacon in my burger! If you did, \
I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void){
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. \
	I’ve been coming for years whereas you started working here since last month." 
	<< std::endl;
}

void Harl::error(void){
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." 
	<< std::endl;
}

void Harl::complain(std::string level) {
	int i = 0;
	while (i < 4) {
		if (this->levels[i].label == level){
			funcPtr run = this->levels[i].func;
			(this->*run)();
			return ;
		}
		i++;
	}
	std::cout << "[ " << level << " not found ]\nInsert some generic complaining here." << std::endl;
}
