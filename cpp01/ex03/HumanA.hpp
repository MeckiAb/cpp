/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:52:38 by labderra          #+#    #+#             */
/*   Updated: 2024/12/09 21:08:32 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"
# include <iostream>

class HumanA
{
private:
	std::string name;
	Weapon &weapon;
	
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	
	void attack();
};

#endif