/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 18:23:25 by labderra          #+#    #+#             */
/*   Updated: 2024/12/09 21:16:22 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"
# include <iostream>

class HumanB
{
private:
	std::string name;
	Weapon *weapon = NULL;
	
public:
	HumanB(std::string name);
	~HumanB();
	
	void attack();
	void setWeapon(Weapon &weapon);
};

#endif