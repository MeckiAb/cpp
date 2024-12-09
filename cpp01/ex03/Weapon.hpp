/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:39:49 by labderra          #+#    #+#             */
/*   Updated: 2024/12/09 21:05:42 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
# include <iostream>

class Weapon
{
private:
	std::string	type;
	
public:
	Weapon(std::string type);
	~Weapon();

	const std::string &getType();
	void setType(std::string type);
};

#endif