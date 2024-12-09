/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:57:54 by labderra          #+#    #+#             */
/*   Updated: 2024/12/09 21:10:01 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon) {
	this->name = name;
}

HumanA::~HumanA(){	
}

void HumanA::attack(){
	std::cout << this->name << " attacks with their "
	<< this->weapon.getType() << std::endl;
}
